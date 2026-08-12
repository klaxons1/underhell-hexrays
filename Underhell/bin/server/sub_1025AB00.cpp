void __thiscall sub_1025AB00(int this)
{
  double v2; // st5
  double v3; // st7
  double v4; // st7

  if ( *(float *)(this + 1120) <= 1.0 )
  {
    if ( *(float *)(this + 1120) >= 0.0 )
      v2 = *(float *)(this + 1120);
    else
      v2 = 0.0;
  }
  else
  {
    v2 = 1.0;
  }
  *(float *)(this + 1120) = v2;
  v3 = 0.0;
  if ( *(float *)(this + 1124) <= 1.0 )
  {
    if ( *(float *)(this + 1124) >= 0.0 )
      v3 = *(float *)(this + 1124);
  }
  else
  {
    v3 = 1.0;
  }
  *(float *)(this + 1124) = v3;
  *(_BYTE *)(this + 916) = 1;
  sub_102586B0(this);
  sub_102575A0(this);
  v4 = *(float *)(this + 808);
  *(_DWORD *)(this + 196) = sub_102560C0;
  if ( 0.0 == v4 )
    *(float *)(this + 808) = 0.2;
}
