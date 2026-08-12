errno_t __cdecl _strlwr_s_l(char *String, size_t Size, _locale_t Locale)
{
  errno_t result; // eax
  _BYTE v4[8]; // [esp+0h] [ebp-10h] BYREF
  int v5; // [esp+8h] [ebp-8h]
  char v6; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v4, (struct localeinfo_struct *)Locale);
  result = _strlwr_s_l_stat(String, Size, (struct localeinfo_struct *)v4);
  if ( v6 )
    *(_DWORD *)(v5 + 112) &= ~2u;
  return result;
}
