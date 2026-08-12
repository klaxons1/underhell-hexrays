int __cdecl sub_100088F0(int a1, char *String2)
{
  int v3; // edi
  int v4; // esi

  if ( !a1 )
    return 0;
  v3 = 0;
  if ( sub_10126D70(a1) <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = sub_10127960(v3);
    if ( !_stricmp((const char *)(v4 + *(_DWORD *)(v4 + 8)), String2) )
      break;
    if ( ++v3 >= sub_10126D70(a1) )
      return -1;
  }
  return *(_DWORD *)(v4 + 16);
}
