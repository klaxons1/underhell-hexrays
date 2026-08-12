__time64_t __cdecl _time64(__time64_t *Time)
{
  __time64_t result; // rax
  _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  result = (*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL) / 0x989680uLL;
  if ( result > 0x793406FFFLL )
    result = -1;
  if ( Time )
    *Time = result;
  return result;
}
