int __cdecl sub_10429290(char *String1, char *String2)
{
  AssertValidStringPtr(String1, 0xFFFFFF);
  AssertValidStringPtr(String2, 0xFFFFFF);
  return _stricmp(String1, String2);
}
