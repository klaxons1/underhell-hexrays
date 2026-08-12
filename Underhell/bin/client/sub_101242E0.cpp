float *__cdecl sub_101242E0(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_10034900(0x508u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_10123DC0(v2);
  *(_DWORD *)v3 = &C_SpriteOriented::`vftable';
  *((_DWORD *)v3 + 1) = &C_SpriteOriented::`vftable';
  *((_DWORD *)v3 + 2) = &C_SpriteOriented::`vftable';
  *((_DWORD *)v3 + 3) = &C_SpriteOriented::`vftable';
  *((_DWORD *)v3 + 298) = &C_SpriteOriented::`vftable';
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
