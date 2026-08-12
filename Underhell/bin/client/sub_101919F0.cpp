float *__cdecl sub_101919F0(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_10034900(0x4B8u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *(_DWORD *)v3 = &C_EnvStarfield::`vftable';
  *((_DWORD *)v3 + 1) = &C_EnvStarfield::`vftable';
  *((_DWORD *)v3 + 2) = &C_EnvStarfield::`vftable';
  *((_DWORD *)v3 + 3) = &C_EnvStarfield::`vftable';
  v3[298] = 0.0;
  v3[300] = 1.0;
  *((_BYTE *)v3 + 1196) = 0;
  v3[301] = 0.0;
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
