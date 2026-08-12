struct tm *__cdecl _localtime64(const __time64_t *Time)
{
  struct tm *result; // eax

  result = (struct tm *)__getgmtimebuf();
  if ( result )
    return _localtime64_s(result, Time) == 0 ? result : 0;
  return result;
}
