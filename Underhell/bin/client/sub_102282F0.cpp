char *__cdecl sub_102282F0(char *Destination, char *Source, int Count)
{
  char *result; // eax

  AssertValidWritePtr(Destination, Count);
  AssertValidStringPtr(Source, 0xFFFFFF);
  result = strncpy(Destination, Source, Count);
  if ( Count > 0 )
    Destination[Count - 1] = 0;
  return result;
}
