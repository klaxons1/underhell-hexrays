int __stdcall sub_10027270(int a1, char *String2)
{
  int v3; // esi
  const char *v4; // eax

  if ( !a1 )
    return 0;
  v3 = 0;
  if ( sub_10126D90(a1) <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = (const char *)sub_10127A80(v3);
    if ( !_stricmp(&v4[*(_DWORD *)v4], String2) )
      break;
    if ( ++v3 >= sub_10126D90(a1) )
      return -1;
  }
  return v3;
}
