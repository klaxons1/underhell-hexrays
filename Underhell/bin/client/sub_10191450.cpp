char *__cdecl sub_10191450(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_10034900(0x828u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1002F0F0(v2);
  *(_DWORD *)v3 = &C_EnvHeadcrabCanister::`vftable';
  *((_DWORD *)v3 + 1) = &C_EnvHeadcrabCanister::`vftable';
  *((_DWORD *)v3 + 2) = &C_EnvHeadcrabCanister::`vftable';
  *((_DWORD *)v3 + 3) = &C_EnvHeadcrabCanister::`vftable';
  sub_101A7470(v3 + 1960);
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 8;
}
