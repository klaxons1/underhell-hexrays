wchar_t *__cdecl sub_10228330(wchar_t *Destination, wchar_t *Source, unsigned int a3)
{
  wchar_t *result; // eax

  AssertValidWritePtr(Destination, a3);
  AssertValidReadPtr(Source, 1);
  result = wcsncpy(Destination, Source, a3 >> 1);
  if ( a3 >> 1 )
  {
    result = 0;
    Destination[(a3 >> 1) - 1] = 0;
  }
  return result;
}
