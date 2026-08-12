char *__cdecl sub_100654F0(char *Str, char *Destination, int a3, char *a4, int a5, float *a6)
{
  char *v6; // eax
  char *v7; // edi
  int v9; // esi
  signed int v10; // eax
  int v11; // eax
  char *v12; // ebx
  char *v13; // eax
  char *v14; // esi
  int v15; // esi
  int v16; // eax
  char v17; // [esp+Fh] [ebp-1h]

  v6 = strstr(Str, ":");
  v7 = v6;
  if ( !v6 )
  {
    DevMsg("SplitContext:  warning, ignoring context '%s', missing colon separator!\n", Str);
    *a4 = 0;
    *Destination = 0;
    return 0;
  }
  v9 = v6 - Str;
  v10 = v6 - Str + 1;
  if ( v10 >= a3 )
    v10 = a3;
  sub_104299C0(Destination, Str, v10);
  v11 = a3 - 1;
  if ( v9 < a3 - 1 )
    v11 = v9;
  Destination[v11] = 0;
  v17 = 0;
  v12 = strstr(v7 + 1, ",");
  if ( !v12 )
  {
    v12 = &v7[strlen(v7 + 1) + 1];
    v17 = 1;
  }
  v13 = strstr(v7 + 1, ":");
  v14 = v13;
  if ( v13 && v13 < v12 )
  {
    if ( a6 )
      *a6 = atof(v13 + 1);
    v15 = v14 - v7 - 1;
    v16 = a5 - 1;
    if ( v15 >= a5 - 1 )
LABEL_19:
      v15 = v16;
  }
  else
  {
    if ( a6 )
      *a6 = 0.0;
    v16 = v12 - v7 - 1;
    v15 = a5 - 1;
    if ( v16 < a5 - 1 )
      goto LABEL_19;
  }
  sub_104299C0(a4, v7 + 1, v15 + 1);
  a4[v15] = 0;
  if ( v17 )
    return 0;
  return v12 + 1;
}
