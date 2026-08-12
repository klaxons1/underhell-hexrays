int __stdcall sub_1024A9F0(char *String2)
{
  int v1; // esi
  const char *i; // edi

  if ( !String2 )
    return -1;
  if ( !*String2 )
    return -1;
  v1 = 0;
  if ( dword_106C6860 <= 0 )
    return -1;
  for ( i = byte_106C6660; _stricmp(i, String2); i += 16 )
  {
    if ( ++v1 >= dword_106C6860 )
      return -1;
  }
  return v1;
}
