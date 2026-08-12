bool __thiscall sub_100FD080(int this, float a2)
{
  long double v2; // st7
  bool v3; // bl
  float v5; // [esp+0h] [ebp-8h]

  v2 = fabs(*(float *)(this + 108)) - *(float *)(this + 828) * 0.1 * *(float *)(this + 812);
  if ( v2 < 0.0 )
    v2 = 0.0;
  if ( fabs(a2) < fabs(v2) )
  {
    if ( *(float *)(this + 108) < 0.0 )
      v2 = v2 * -1.0;
    v5 = v2;
    sub_100FCCC0(this, v5);
    return 0;
  }
  else
  {
    v3 = *(_BYTE *)(this + 856) == 0;
    sub_100FCCC0(this, a2);
    return v3;
  }
}
