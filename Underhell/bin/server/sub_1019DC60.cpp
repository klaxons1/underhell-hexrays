int __thiscall sub_1019DC60(_DWORD *this, char *String2)
{
  int v2; // edi
  const char *v5; // edi
  int v6; // ebx
  const char *v7; // eax
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+13h] [ebp-1h]

  v2 = 0;
  v8 = 0;
  v9 = 0;
  if ( !this[266] )
    return v8;
  while ( _strnicmp(*(const char **)(this[265] + 4 * v2), String2, strlen(String2)) )
  {
LABEL_7:
    if ( (unsigned int)++v2 >= this[266] )
    {
      if ( !v9 )
        return v8;
      return 0;
    }
  }
  if ( _stricmp(*(const char **)(this[265] + 4 * v2), String2) )
  {
    if ( v8 )
      v9 = 1;
    else
      v8 = sub_1019DC10(this, *(char **)(this[265] + 4 * v2));
    goto LABEL_7;
  }
  v5 = *(const char **)(this[265] + 4 * v2);
  v6 = 0;
  if ( !this[266] )
    return 0;
  while ( 1 )
  {
    v7 = *(const char **)(this[265] + 4 * v6);
    if ( v7 == v5 || !_stricmp(v7, v5) )
      break;
    if ( (unsigned int)++v6 >= this[266] )
      return 0;
  }
  return v6 + 1;
}
