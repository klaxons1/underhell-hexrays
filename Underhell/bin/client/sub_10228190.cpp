char __cdecl sub_10228190(char *a1, char *Source, unsigned int a3)
{
  char *v3; // ecx
  char *v4; // eax
  size_t v5; // ecx

  v3 = &a1[strlen(a1) - 1];
  LOBYTE(v4) = *v3;
  if ( *v3 != 92 )
  {
    do
    {
      if ( (_BYTE)v4 == 47 || v3 <= a1 )
        break;
      if ( (_BYTE)v4 == 46 )
        return (char)v4;
      LOBYTE(v4) = *--v3;
    }
    while ( (_BYTE)v4 != 92 );
  }
  AssertValidStringPtr(a1, 0xFFFFFF);
  AssertValidStringPtr(Source, 0xFFFFFF);
  v4 = (char *)strlen(a1);
  v5 = strlen(Source);
  if ( (unsigned int)&v4[v5] >= a3 )
    v5 = a3 - (_DWORD)v4 - 1;
  if ( v5 )
  {
    v4 = strncat(a1, Source, v5);
    v4[a3 - 1] = 0;
  }
  return (char)v4;
}
