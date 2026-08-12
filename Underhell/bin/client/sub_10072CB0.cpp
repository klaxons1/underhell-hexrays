char *__cdecl sub_10072CB0(char *a1)
{
  char *v1; // esi
  int v2; // eax
  char *v3; // edi
  int v4; // eax
  char *v6; // [esp+4h] [ebp-8h] BYREF

  v1 = a1;
  if ( a1 )
  {
    v6 = a1;
    v2 = sub_10071EF0((unsigned __int8 (__cdecl **)(int, int))&off_103DC4AC, (int)&v6);
    if ( v2 != -1 )
      return *(char **)(dword_103DC4B0 + 24 * v2 + 20);
  }
  if ( sub_10229D00(32) )
    v3 = (char *)sub_10229D20(v1);
  else
    v3 = 0;
  a1 = v3;
  if ( dword_10413188 )
    v4 = dword_10413188 + 4;
  else
    v4 = 0;
  sub_10229D70(v4, v1, 0);
  sub_10072C00((int)&off_103DC4AC, v1, &a1);
  return v3;
}
