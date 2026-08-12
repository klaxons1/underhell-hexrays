errno_t __cdecl _strupr_s_l(char *String, size_t Size, _locale_t Locale)
{
  errno_t result; // eax
  _BYTE v4[8]; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+10h] [ebp-8h]
  char v6; // [esp+14h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v4, (struct localeinfo_struct *)Locale);
  result = _strupr_s_l_stat((struct localeinfo_struct *)v4, String, (char *)Size);
  if ( v6 )
    *(_DWORD *)(v5 + 112) &= ~2u;
  return result;
}
