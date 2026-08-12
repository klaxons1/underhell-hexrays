int __stdcall sub_1017D360(char *a1, char *String2)
{
  int v3; // esi
  int v4; // eax

  if ( !a1 )
    return -1;
  v3 = 0;
  if ( sub_10126D70(a1) <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = sub_10127960(a1, v3);
    if ( !_stricmp((const char *)(v4 + *(_DWORD *)(v4 + 8)), String2) )
      break;
    if ( ++v3 >= sub_10126D70(a1) )
      return -1;
  }
  return v3;
}
