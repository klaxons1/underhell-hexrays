int sub_10264D20()
{
  int result; // eax
  unsigned __int16 i; // si

  if ( (dword_106CE618 & 1) == 0 )
  {
    dword_106CE618 |= 1u;
    sub_10264C10(&dword_106CE5F8);
    atexit(sub_10474960);
  }
  result = sub_10263D00((int)&dword_106CE5FC);
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    Warning("%s\n", *(const char **)(dword_106CE600 + 16 * i + 8));
    result = sub_10263DD0(&dword_106CE5FC, i);
  }
  return result;
}
