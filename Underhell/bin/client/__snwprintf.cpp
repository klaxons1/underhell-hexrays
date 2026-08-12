int _snwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, ...)
{
  int result; // eax
  int v4; // edi
  FILE File; // [esp+8h] [ebp-20h] BYREF
  va_list va; // [esp+3Ch] [ebp+14h] BYREF

  va_start(va, Format);
  memset(&File, 0, sizeof(File));
  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    if ( BufferCount <= 0x3FFFFFFF )
      File._cnt = 2 * BufferCount;
    else
      File._cnt = 0x7FFFFFFF;
    result = _woutput_l((int)&File, (int)Format, 0, (int)va);
    v4 = result;
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        _flsbuf(0, &File);
      else
        *File._ptr++ = 0;
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
