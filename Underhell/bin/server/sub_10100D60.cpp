int __cdecl sub_10100D60(int a1, char *String1)
{
  int v2; // esi
  const char *v3; // eax

  if ( !a1 )
    return -1;
  if ( !(unsigned __int8)sub_10245FE0(a1) )
    return -1;
  v2 = 0;
  if ( sub_102452B0(a1) <= 0 )
    return -1;
  while ( 1 )
  {
    v3 = (const char *)sub_102457E0(v2);
    if ( !_stricmp(String1, &v3[*(_DWORD *)v3]) )
      break;
    if ( ++v2 >= sub_102452B0(a1) )
      return -1;
  }
  return v2;
}
