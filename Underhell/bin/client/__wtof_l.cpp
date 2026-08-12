double __cdecl _wtof_l(const wchar_t *String, _locale_t Locale)
{
  wint_t *v2; // esi
  double result; // st7
  _BYTE v4[8]; // [esp+4h] [ebp-2Ch] BYREF
  int v5; // [esp+Ch] [ebp-24h]
  char v6; // [esp+10h] [ebp-20h]
  _BYTE v7[24]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = (wint_t *)String;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v4, (struct localeinfo_struct *)Locale);
  if ( String )
  {
    while ( iswctype(*v2, 8u) )
      ++v2;
    result = *(double *)(_wfltin2(v7, v2, v4) + 16);
    if ( v6 )
      *(_DWORD *)(v5 + 112) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v6 )
      *(_DWORD *)(v5 + 112) &= ~2u;
    return 0.0;
  }
  return result;
}
