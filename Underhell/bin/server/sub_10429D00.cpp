char __cdecl sub_10429D00(const char *a1, char *Destination, int Count)
{
  unsigned int v3; // eax
  const char *v4; // esi

  *Destination = 0;
  v3 = strlen(a1);
  v4 = &a1[v3 - 1];
  if ( v4 != a1 )
  {
    LOBYTE(v3) = 46;
    while ( *(v4 - 1) != 46 )
    {
      if ( --v4 == a1 )
        return v3;
    }
    if ( v4 != a1 )
    {
      LOBYTE(v3) = *v4;
      if ( *v4 != 92 && (_BYTE)v3 != 47 )
      {
        AssertValidWritePtr(Destination, Count);
        AssertValidStringPtr(v4, 0xFFFFFF);
        LOBYTE(v3) = (unsigned __int8)strncpy(Destination, v4, Count);
        if ( Count > 0 )
          Destination[Count - 1] = 0;
      }
    }
  }
  return v3;
}
