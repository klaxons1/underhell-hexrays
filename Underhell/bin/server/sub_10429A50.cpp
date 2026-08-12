int __cdecl sub_10429A50(char *Buffer, size_t BufferCount, char *Format, va_list ArgList)
{
  int result; // eax

  AssertValidWritePtr(Buffer, BufferCount);
  AssertValidStringPtr(Format, 0xFFFFFF);
  result = _vsnprintf(Buffer, BufferCount, Format, ArgList);
  if ( result < 0 )
  {
    Buffer[BufferCount - 1] = 0;
    return BufferCount;
  }
  return result;
}
