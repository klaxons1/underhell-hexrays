int __cdecl sub_10227C40(char *String1, char *String2)
{
  AssertValidStringPtr(String1, 0xFFFFFF);
  AssertValidStringPtr(String2, 0xFFFFFF);
  return _stricmp(String1, String2);
}
