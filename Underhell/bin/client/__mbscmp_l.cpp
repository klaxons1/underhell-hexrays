int __cdecl _mbscmp_l(const unsigned __int8 *Str1, const unsigned __int8 *Str2, _locale_t Locale)
{
  const unsigned __int8 *v3; // edi
  int result; // eax
  const unsigned __int8 *v5; // esi
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // ax
  _BYTE v8[4]; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  char v11; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v8, (struct localeinfo_struct *)Locale);
  v3 = Str1;
  if ( Str1 )
  {
    v5 = Str2;
    if ( Str2 )
    {
      if ( *(_DWORD *)(v9 + 8) )
      {
        do
        {
          v6 = *v3++;
          if ( (*(_BYTE *)((unsigned __int8)v6 + v9 + 29) & 4) != 0 )
          {
            if ( *v3 )
              v6 = *v3++ | (unsigned __int16)(v6 << 8);
            else
              v6 = 0;
          }
          v7 = *v5++;
          if ( (*(_BYTE *)((unsigned __int8)v7 + v9 + 29) & 4) != 0 )
          {
            if ( *v5 )
              v7 = *v5++ | (unsigned __int16)(v7 << 8);
            else
              v7 = 0;
          }
          if ( v7 != v6 )
          {
            result = v7 < v6 ? 1 : -1;
            goto LABEL_26;
          }
        }
        while ( v6 );
        if ( v11 )
          *(_DWORD *)(v10 + 112) &= ~2u;
        return 0;
      }
      else
      {
        result = strcmp((const char *)Str1, (const char *)Str2);
LABEL_26:
        if ( v11 )
          *(_DWORD *)(v10 + 112) &= ~2u;
      }
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      if ( v11 )
        *(_DWORD *)(v10 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    if ( v11 )
      *(_DWORD *)(v10 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}
