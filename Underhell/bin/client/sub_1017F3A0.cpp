int __thiscall sub_1017F3A0(_DWORD *this, char *String2)
{
  int v3; // eax
  int v4; // esi

  v3 = this[70];
  v4 = 0;
  if ( *(int *)(v3 + 76) <= 0 )
    return -1;
  while ( _stricmp(**(const char ***)(*(_DWORD *)(v3 + 64) + 4 * v4), String2) )
  {
    v3 = this[70];
    if ( ++v4 >= *(_DWORD *)(v3 + 76) )
      return -1;
  }
  return v4;
}
