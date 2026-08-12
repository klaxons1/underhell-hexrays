int swscanf(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  return vscan_fn_0(Buffer, (int (__cdecl *)(_DWORD *, int, int, int))_winput_l, (int)Format, 0, (int)va);
}
