char *__cdecl sub_10198530(int a1, int a2)
{
  char *v2; // eax
  char *v3; // eax
  char *v4; // esi

  v2 = (char *)sub_10034900(0x558u);
  if ( !v2 )
    return 0;
  v3 = sub_101983A0(v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v4 + 8;
}
