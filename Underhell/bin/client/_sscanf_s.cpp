int sscanf_s(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  return vscan_fn(Buffer, (int (__cdecl *)(_DWORD *, int, int, int))_input_s_l, (int)Format, 0, (int)va);
}
