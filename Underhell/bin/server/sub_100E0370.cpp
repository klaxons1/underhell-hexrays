int __cdecl sub_100E0370(int *a1)
{
  int *v1; // ebx
  const char *v2; // eax
  const char *v3; // eax
  int i; // esi
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  char *v8; // eax
  int result; // eax
  int j; // esi
  const char *v11; // eax
  const char *v12; // eax
  char *v13; // eax

  v1 = a1;
  if ( *a1 < 1 )
    return Msg("syntax: findinworld EntityClassName \n");
  v2 = String;
  if ( *a1 > 1 )
    v2 = (const char *)a1[259];
  if ( !strcmp(v2, String) )
    return Msg("syntax: findinworld EntityClassName \n");
  v3 = String;
  if ( *a1 > 1 )
    v3 = (const char *)a1[259];
  for ( i = sub_1012BC90(0, v3); i; i = sub_1012BC90(i, v7) )
  {
    Msg("Found entity of that ClassName:\n");
    v5 = *(const char **)(i + 260);
    if ( !v5 )
      v5 = String;
    Msg("Its entity name is %s\n", v5);
    v6 = *(const char **)(*(int (__thiscall **)(int, int **))(*(_DWORD *)i + 28))(i, &a1);
    if ( !v6 )
      v6 = String;
    Msg("Its model name is %s\n", v6);
    if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
      sub_100DAE60(i);
    if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
      sub_100DAE60(i);
    if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
      sub_100DAE60(i);
    Msg("It is at %f %f %f\n", *(float *)(i + 580), *(float *)(i + 584), *(float *)(i + 588));
    v7 = sub_100634F0(v1, 1);
  }
  v8 = (char *)String;
  if ( *v1 > 1 )
    v8 = (char *)v1[259];
  result = sub_1012BF20(0, v8, 0, 0, 0, 0);
  for ( j = result; result; j = result )
  {
    Msg("Found entity of that Entity Name:\n");
    v11 = *(const char **)(j + 92);
    if ( !v11 )
      v11 = String;
    Msg("Its ClassName is %s\n", v11);
    v12 = *(const char **)(*(int (__thiscall **)(int, int **))(*(_DWORD *)j + 28))(j, &a1);
    if ( !v12 )
      v12 = String;
    Msg("Its model name is %s\n", v12);
    if ( (*(_DWORD *)(j + 252) & 0x800) != 0 )
      sub_100DAE60(j);
    if ( (*(_DWORD *)(j + 252) & 0x800) != 0 )
      sub_100DAE60(j);
    if ( (*(_DWORD *)(j + 252) & 0x800) != 0 )
      sub_100DAE60(j);
    Msg("It is at %f %f %f\n", *(float *)(j + 580), *(float *)(j + 584), *(float *)(j + 588));
    v13 = (char *)sub_100634F0(v1, 1);
    result = sub_1012BF20(j, v13, 0, 0, 0, 0);
  }
  return result;
}
