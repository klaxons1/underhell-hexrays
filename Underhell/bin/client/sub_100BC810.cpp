int sub_100BC810(wchar_t *Buffer, wchar_t *Format, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, Format);
  return _vswprintf(Buffer, Format, va);
}
