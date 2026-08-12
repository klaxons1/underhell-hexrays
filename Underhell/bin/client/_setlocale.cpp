char *__cdecl setlocale(int Category, const char *Locale)
{
  int v3; // esi
  volatile LONG *v4; // ebx
  char *v5; // [esp+14h] [ebp-20h]

  v5 = 0;
  if ( (unsigned int)Category <= 5 )
  {
    v3 = _getptd();
    __updatetlocinfo();
    *(_DWORD *)(v3 + 112) |= 0x10u;
    v4 = (volatile LONG *)sub_100DD9C0(216, 1);
    if ( v4 )
    {
      _lock(12);
      _copytlocinfo_nolock(v4, *(_DWORD **)(v3 + 108));
      _unlock(12);
      v5 = _setlocale_nolock(Category, v4, (char *)Locale);
      if ( v5 )
      {
        if ( Locale && strcmp(Locale, Str2) )
          dword_10481B60 = 1;
        _lock(12);
        _updatetlocinfoEx_nolock(v3 + 108, v4);
        __removelocaleref(v4);
        if ( (*(_BYTE *)(v3 + 112) & 2) == 0 && (dword_103FE0A0 & 1) == 0 )
        {
          _updatetlocinfoEx_nolock((int)&off_103FE2E8, *(volatile LONG **)(v3 + 108));
          off_103FEA50 = (_UNKNOWN **)*((_DWORD *)off_103FE2E8 + 47);
          off_103FE9E0 = (wchar_t *)*((_DWORD *)off_103FE2E8 + 50);
          dword_103FE9E8 = *((_DWORD *)off_103FE2E8 + 43);
        }
        _unlock(12);
      }
      else
      {
        __removelocaleref(v4);
        __freetlocinfo(v4);
      }
    }
    *(_DWORD *)(v3 + 112) &= ~0x10u;
    return v5;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
}
