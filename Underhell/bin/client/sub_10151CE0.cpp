bool __thiscall sub_10151CE0(_DWORD *this)
{
  float *v2; // eax
  float *v3; // esi
  int v4; // ecx

  v2 = (float *)sub_100DDA40(260);
  v3 = v2;
  if ( v2 )
  {
    sub_100F2BA0(v2, (int)"snowfall");
    *(_DWORD *)v3 = &SnowFallEffect::`vftable';
  }
  else
  {
    v3 = 0;
  }
  if ( v3 != (float *)this[303] )
  {
    if ( v3 )
      sub_100F2950(v3);
    v4 = this[303];
    if ( v4 )
      sub_100F2FF0(v4);
    this[303] = v3;
  }
  return v3 != 0;
}
