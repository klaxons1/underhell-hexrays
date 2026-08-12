size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  size_t result; // eax

  for ( result = 0; result < MaxCount; ++String )
  {
    if ( !*String )
      break;
    ++result;
  }
  return result;
}
