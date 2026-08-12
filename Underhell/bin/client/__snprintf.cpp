int _snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax
  int v4; // edi
  FILE File; // [esp+8h] [ebp-20h] BYREF
  va_list va; // [esp+3Ch] [ebp+14h] BYREF

  va_start(va, Format);
  memset(&File, 0, sizeof(File));
  if ( Format && (!BufferCount || Buffer) )
  {
    File._cnt = 0x7FFFFFFF;
    if ( BufferCount <= 0x7FFFFFFF )
      File._cnt = BufferCount;
    File._flag = 66;
    File._base = Buffer;
    File._ptr = Buffer;
    result = _output_l(&File, (int)Format, 0, (int)va);
    v4 = result;
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        _flsbuf(0, &File);
      else
        *File._ptr = 0;
      return v4;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  return result;
}
