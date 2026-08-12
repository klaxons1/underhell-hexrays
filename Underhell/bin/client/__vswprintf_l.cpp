int __cdecl _vswprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v6; // eax
  bool v7; // sf
  int v8; // esi
  FILE File; // [esp+8h] [ebp-20h] BYREF

  memset(&File, 0, sizeof(File));
  if ( BufferCount && Buffer )
  {
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v6 = _woutput_l((int)&File, BufferCount, (struct localeinfo_struct *)Format, (int)Locale);
    v7 = --File._cnt < 0;
    v8 = v6;
    if ( v7 )
      _flsbuf(0, &File);
    else
      *File._ptr++ = 0;
    if ( --File._cnt < 0 )
      _flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
