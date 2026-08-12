BOOL __cdecl sub_10092650(char *String1, char *String2)
{
  return String1 == String2 || String1 && String2 && !_stricmp(String1, String2);
}
