int sub_10228370(char *Buffer, size_t BufferCount, char *Format, ...)
{
  int result; // eax
  va_list va; // [esp+1Ch] [ebp+14h] BYREF

  va_start(va, Format);
  AssertValidWritePtr(Buffer, BufferCount);
  AssertValidStringPtr(Format, 0xFFFFFF);
  result = _vsnprintf(Buffer, BufferCount, Format, va);
  if ( result < 0 )
  {
    Buffer[BufferCount - 1] = 0;
    return BufferCount;
  }
  return result;
}
