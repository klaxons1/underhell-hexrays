int __cdecl sub_10120530(char *Destination)
{
  unsigned int v1; // kr00_4
  char *v2; // esi
  void *v3; // esp
  char *i; // eax
  char v6[12]; // [esp+0h] [ebp-Ch] BYREF

  v1 = strlen(Destination);
  v2 = Destination;
  v3 = alloca(v1 + 1);
  for ( i = v6; *v2; ++i )
  {
    if ( *v2 == 92 )
    {
      if ( v2[1] == 110 )
      {
        *i = 10;
        ++v2;
      }
      else
      {
        *i = 92;
      }
    }
    else
    {
      *i = *v2;
    }
    ++v2;
  }
  *i = 0;
  return sub_102282F0(Destination, v6, v1 + 1);
}
