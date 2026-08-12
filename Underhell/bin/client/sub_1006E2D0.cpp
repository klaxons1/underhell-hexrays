char *__cdecl sub_1006E2D0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // eax
  char *v4; // esi

  v2 = (char *)sub_10034900(0x17E0u);
  if ( !v2 )
    return 0;
  v3 = sub_1006DD60(v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v4 + 8;
}
