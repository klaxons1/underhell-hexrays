char *__cdecl strtok(char *String, const char *Delimiter)
{
  char v3; // dl
  char *v4; // edx
  char *v5; // ebx
  int v7; // [esp+10h] [ebp-28h]
  _BYTE v8[32]; // [esp+14h] [ebp-24h] BYREF

  v7 = _getptd();
  memset(v8, 0, sizeof(v8));
  do
  {
    v3 = *Delimiter;
    v8[*(unsigned __int8 *)Delimiter >> 3] |= 1 << (*Delimiter & 7);
    ++Delimiter;
  }
  while ( v3 );
  v4 = String;
  if ( !String )
    v4 = *(char **)(v7 + 24);
  while ( ((unsigned __int8)(1 << (*v4 & 7)) & v8[(unsigned __int8)*v4 >> 3]) != 0 && *v4 )
    ++v4;
  v5 = v4;
  while ( *v4 )
  {
    if ( ((unsigned __int8)(1 << (*v4 & 7)) & v8[(unsigned __int8)*v4 >> 3]) != 0 )
    {
      *v4++ = 0;
      break;
    }
    ++v4;
  }
  *(_DWORD *)(v7 + 24) = v4;
  return v4 != v5 ? v5 : 0;
}
