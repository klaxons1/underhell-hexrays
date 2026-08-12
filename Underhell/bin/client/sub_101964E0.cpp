char *__cdecl sub_101964E0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_10034900(0x7D0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1002F0F0(v2);
  *(_DWORD *)v3 = &C_PropCombineBall::`vftable';
  *((_DWORD *)v3 + 1) = &C_PropCombineBall::`vftable';
  *((_DWORD *)v3 + 2) = &C_PropCombineBall::`vftable';
  *((_DWORD *)v3 + 3) = &C_PropCombineBall::`vftable';
  *((_DWORD *)v3 + 496) = 0;
  *((_DWORD *)v3 + 497) = 0;
  *((_DWORD *)v3 + 498) = 0;
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 8;
}
