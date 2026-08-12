float *__cdecl sub_1006B760(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_10034900(0x4B8u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  v3[298] = 100.0;
  *(_DWORD *)v3 = &C_SpotlightEnd::`vftable';
  *((_DWORD *)v3 + 1) = &C_SpotlightEnd::`vftable';
  *((_DWORD *)v3 + 2) = &C_SpotlightEnd::`vftable';
  *((_DWORD *)v3 + 3) = &C_SpotlightEnd::`vftable';
  v3[300] = 0.0;
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
