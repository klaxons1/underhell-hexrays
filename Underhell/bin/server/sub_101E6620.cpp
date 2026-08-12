int __thiscall sub_101E6620(_DWORD *this, char *String1)
{
  int v2; // esi
  _DWORD *i; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  char *v7; // eax
  unsigned int v9; // eax

  v2 = 0;
  for ( i = this + 477; ; ++i )
  {
    if ( *i != -1 )
    {
      v4 = &off_1061BE18[4 * (*i & 0xFFF) + 1];
      v5 = *i >> 12;
      if ( off_1061BE18[4 * (*i & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          v6 = off_1061BE18[4 * (*i & 0xFFF) + 2] == v5 ? *v4 : 0;
          v7 = *(char **)(v6 + 92);
          if ( !v7 )
            v7 = (char *)String;
          if ( String1 == v7 || !_stricmp(String1, v7) )
            break;
        }
      }
    }
    if ( ++v2 >= 48 )
      return 0;
  }
  v9 = this[v2 + 477];
  if ( v9 == -1 || off_1061BE18[4 * (this[v2 + 477] & 0xFFF) + 2] != v9 >> 12 )
    return 0;
  return off_1061BE18[4 * (this[v2 + 477] & 0xFFF) + 1];
}
