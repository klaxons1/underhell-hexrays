int __cdecl _vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return _vsnprintf_l(Buffer, BufferCount, Format, 0, ArgList);
}
