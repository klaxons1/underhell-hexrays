int __thiscall sub_100F2B70(_WORD *this, char *String2)
{
  int v2; // edi
  int v4; // esi

  v2 = 0;
  if ( dword_10698B68 <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(dword_10698B5C + 4 * v2);
    if ( v4 )
    {
      if ( !_stricmp((const char *)v4, String2) )
        break;
    }
    if ( ++v2 >= dword_10698B68 )
      return 0;
  }
  if ( this )
    sub_100F2580(this, *(_DWORD *)(v4 + 128));
  return *(_DWORD *)(v4 + 128);
}
