int __thiscall sub_100FCFD0(int this)
{
  bool v2; // bl
  long double v3; // st7
  float v5; // [esp+0h] [ebp-Ch]

  v2 = 0;
  v3 = fabs(*(float *)(this + 108)) + *(float *)(this + 828) * 0.2 * *(float *)(this + 812);
  if ( fabs(*(float *)(this + 824)) > fabs(v3) )
  {
    if ( *(float *)(this + 824) < 0.0 )
      v3 = v3 * -1.0;
  }
  else
  {
    v3 = *(float *)(this + 824);
    v2 = *(_BYTE *)(this + 856) == 0;
  }
  v5 = v3;
  sub_100FCCC0(this, v5);
  if ( v2 )
  {
    *(_DWORD *)(this + 4) = sub_100FC070;
    sub_100FC070(this);
  }
  if ( *(_BYTE *)(this + 856) )
    return sub_100D8290((float *)this, *(float *)(dword_106B31C8 + 28));
  else
    return sub_100D8290((float *)this, 0.1);
}
