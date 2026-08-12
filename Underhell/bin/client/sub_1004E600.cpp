char *__cdecl sub_1004E600(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi
  void (__thiscall *v4)(char *, int, int); // eax

  v2 = (char *)sub_10034900(0x878u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1002F0F0(v2);
  *(_DWORD *)v3 = &C_Fish::`vftable';
  *((_DWORD *)v3 + 1) = &C_Fish::`vftable';
  *((_DWORD *)v3 + 2) = &C_Fish::`vftable';
  *((_DWORD *)v3 + 3) = &C_Fish::`vftable';
  *((float *)v3 + 504) = -1.0;
  v4 = *(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 160);
  *((float *)v3 + 503) = 0.0;
  v4(v3, a1, a2);
  return v3 + 8;
}
