int __cdecl sub_10255090(char *a1, int a2, char *String1, char *Source, int a5)
{
  int v5; // edi
  const char *v6; // eax
  int result; // eax
  int v8; // ebx
  char *v9; // edi
  char *v10; // esi
  int v11; // ecx
  int v12; // edi

  if ( !a1 )
    return 0;
  if ( !String1 )
    return 0;
  if ( !Source )
    return 0;
  v5 = a5;
  if ( !a5 )
    return 0;
  v6 = *(const char **)(dword_106B31C8 + 60);
  if ( !v6 )
    v6 = String;
  if ( !_stricmp(String1, v6) )
    return 0;
  v8 = 0;
  if ( a2 <= 0 )
  {
LABEL_15:
    v10 = &a1[80 * a2];
    sub_104299C0(v10, String1, 0x20u);
    sub_104299C0(v10 + 32, Source, 0x20u);
    *((_DWORD *)v10 + 16) = v5;
    v11 = *(_DWORD *)(v5 + 12);
    if ( v11 )
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 20))(v11);
    else
      v12 = 0;
    if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
      sub_100DAE60(v12);
    result = 1;
    *((float *)v10 + 17) = *(float *)(v12 + 580);
    *((float *)v10 + 18) = *(float *)(v12 + 584);
    *((float *)v10 + 19) = *(float *)(v12 + 588);
  }
  else
  {
    v9 = a1;
    while ( *((_DWORD *)v9 + 16) != a5 || _stricmp(v9, String1) )
    {
      ++v8;
      v9 += 80;
      if ( v8 >= a2 )
      {
        v5 = a5;
        goto LABEL_15;
      }
    }
    return 0;
  }
  return result;
}
