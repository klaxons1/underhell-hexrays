char *__cdecl sub_10151330(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_10034900(0x680u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *(_DWORD *)v3 = &C_EnvWind::`vftable';
  *((_DWORD *)v3 + 1) = &C_EnvWind::`vftable';
  *((_DWORD *)v3 + 2) = &C_EnvWind::`vftable';
  *((_DWORD *)v3 + 3) = &C_EnvWind::`vftable';
  sub_1009CAB0((float *)v3 + 298);
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 8;
}
