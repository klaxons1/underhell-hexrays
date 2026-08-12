signed int __cdecl sub_102287C0(const char *Src, char *Destination, int Count)
{
  signed int result; // eax
  char v4; // cl
  char v5; // cl
  size_t v6; // esi

  result = strlen(Src) - 1;
  if ( result <= 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v4 = Src[result];
    if ( v4 == 46 || v4 == 92 || v4 == 47 )
      break;
    if ( --result <= 0 )
      goto LABEL_6;
  }
  v5 = Src[result];
  if ( v5 == 92 || v5 == 47 || result >= Count )
  {
LABEL_6:
    if ( Destination != Src )
    {
      AssertValidWritePtr(Destination, Count);
      AssertValidStringPtr(Src, 0xFFFFFF);
      result = (signed int)strncpy(Destination, Src, Count);
      if ( Count > 0 )
        Destination[Count - 1] = 0;
    }
  }
  else
  {
    v6 = Count - 1;
    if ( result < Count - 1 )
      v6 = result;
    if ( Destination != Src )
      result = (signed int)memcpy_0(Destination, Src, v6);
    Destination[v6] = 0;
  }
  return result;
}
