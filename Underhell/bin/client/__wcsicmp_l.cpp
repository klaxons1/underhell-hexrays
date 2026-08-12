int __cdecl _wcsicmp_l(const wchar_t *String1, const wchar_t *String2, _locale_t Locale)
{
  wint_t *v3; // ebx
  int result; // eax
  wint_t *v5; // edi
  int v6; // ebx
  unsigned int v7; // eax
  wint_t v8; // si
  unsigned int v9; // eax
  __crt_locale_pointers Localea; // [esp+4h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-8h]
  char v12; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  v3 = (wint_t *)String1;
  if ( String1 )
  {
    v5 = (wint_t *)String2;
    if ( String2 )
    {
      if ( *((_DWORD *)Localea.locinfo + 5) )
      {
        do
        {
          v8 = _towlower_l(*v3++, &Localea);
          LOWORD(v9) = _towlower_l(*v5++, &Localea);
        }
        while ( v8 && v8 == (_WORD)v9 );
      }
      else
      {
        v6 = (char *)String1 - (char *)String2;
        do
        {
          v7 = *(wint_t *)((char *)v5 + v6);
          if ( v7 < 0x41 || v7 > 0x5A )
            v8 = *(wint_t *)((char *)v5 + v6);
          else
            v8 = v7 + 32;
          v9 = *v5;
          if ( v9 >= 0x41 && v9 <= 0x5A )
            LOWORD(v9) = v9 + 32;
          ++v5;
        }
        while ( v8 && v8 == (_WORD)v9 );
      }
      result = v8 - (unsigned __int16)v9;
      if ( v12 )
        *(_DWORD *)(v11 + 112) &= ~2u;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      if ( v12 )
        *(_DWORD *)(v11 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v12 )
      *(_DWORD *)(v11 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}
