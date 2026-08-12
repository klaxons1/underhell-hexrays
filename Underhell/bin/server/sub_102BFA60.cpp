int *__stdcall sub_102BFA60(int a1, char *String1)
{
  bool v2; // zf
  int *result; // eax

  v2 = _stricmp(String1, "ep2") == 0;
  result = off_106624A0;
  if ( !v2 )
    return (int *)a1;
  return result;
}
