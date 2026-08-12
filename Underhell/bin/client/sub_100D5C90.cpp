int __thiscall sub_100D5C90(_DWORD *this, char *String1)
{
  int v2; // esi

  v2 = this[45];
  if ( !v2 )
    return 0;
  while ( _stricmp(String1, (const char *)v2) )
  {
    v2 = *(_DWORD *)(v2 + 36);
    if ( !v2 )
      return 0;
  }
  return *(_DWORD *)(v2 + 32);
}
