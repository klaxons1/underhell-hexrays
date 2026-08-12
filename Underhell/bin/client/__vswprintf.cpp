int __cdecl _vswprintf(wchar_t *const Buffer, const wchar_t *const Format, va_list ArgList)
{
  va_list savedregs; // [esp+0h] [ebp+0h]

  return _vswprintf_l(Buffer, (const size_t)Format, 0, (const _locale_t)ArgList, savedregs);
}
