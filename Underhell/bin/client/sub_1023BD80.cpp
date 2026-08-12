const char **__stdcall sub_1023BD80(char *String2, _DWORD *a2)
{
  int v3; // ebx
  int v4; // edi
  const char **v5; // esi
  int v7; // [esp+18h] [ebp+8h]

  while ( 1 )
  {
    if ( !a2 )
      return 0;
    v3 = 0;
    v7 = a2[3];
    if ( v7 > 0 )
      break;
LABEL_6:
    a2 = (_DWORD *)a2[5];
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = (const char **)(v4 + *a2);
    if ( !_stricmp(*v5, String2) )
      return v5;
    ++v3;
    v4 += 24;
    if ( v3 >= v7 )
      goto LABEL_6;
  }
}
