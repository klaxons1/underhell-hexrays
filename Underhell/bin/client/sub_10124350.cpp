float *sub_10124350()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)sub_10034900(0x508u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_10123DC0(v0);
  *(_DWORD *)v1 = &C_SpriteOriented::`vftable';
  *((_DWORD *)v1 + 1) = &C_SpriteOriented::`vftable';
  *((_DWORD *)v1 + 2) = &C_SpriteOriented::`vftable';
  *((_DWORD *)v1 + 3) = &C_SpriteOriented::`vftable';
  *((_DWORD *)v1 + 298) = &C_SpriteOriented::`vftable';
  return v1;
}
