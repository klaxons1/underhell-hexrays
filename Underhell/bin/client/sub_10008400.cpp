int sub_10008400()
{
  int v0; // eax
  int v1; // esi

  v0 = sub_100DDA40(24);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1000A3C0(v0);
  *(float *)(v1 + 20) = 0.0;
  *(_DWORD *)v1 = &CAnimatedOffsetTextureProxy::`vftable';
  return v1;
}
