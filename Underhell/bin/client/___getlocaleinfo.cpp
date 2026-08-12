int __cdecl __getlocaleinfo(struct localeinfo_struct *a1, int a2, LCID Locale, LCTYPE LCType, int *a5)
{
  char *v5; // ebx
  int LocaleInfoA; // esi
  int v7; // eax
  CHAR *v8; // eax
  char *v9; // eax
  int LocaleInfoW; // eax
  int v12; // ebx
  WCHAR *v13; // eax
  int cbMultiByte; // [esp+Ch] [ebp-90h]
  int v15; // [esp+10h] [ebp-8Ch]
  WCHAR LCData[2]; // [esp+14h] [ebp-88h] BYREF
  char Source[128]; // [esp+18h] [ebp-84h] BYREF

  *(_DWORD *)LCData = a1;
  if ( a2 == 1 )
  {
    v15 = 0;
    v5 = Source;
    LocaleInfoA = __crtGetLocaleInfoA(a1, Locale, LCType, Source, 128);
    if ( !LocaleInfoA )
    {
      if ( GetLastError() != 122 )
        return -1;
      v7 = __crtGetLocaleInfoA(*(struct localeinfo_struct **)LCData, Locale, LCType, 0, 0);
      cbMultiByte = v7;
      if ( !v7 )
        return -1;
      v8 = (CHAR *)sub_100DD9C0(v7, 1);
      v5 = v8;
      if ( !v8 )
        return -1;
      v15 = 1;
      LocaleInfoA = __crtGetLocaleInfoA(*(struct localeinfo_struct **)LCData, Locale, LCType, v8, cbMultiByte);
      if ( !LocaleInfoA )
        goto LABEL_9;
    }
    v9 = (char *)sub_100DD9C0(LocaleInfoA, 1);
    *a5 = (int)v9;
    if ( !v9 )
    {
      if ( !v15 )
        return -1;
LABEL_9:
      sub_10034930((int)v5);
      return -1;
    }
    if ( strncpy_s(v9, LocaleInfoA, v5, LocaleInfoA - 1) )
      _invoke_watson(0, 0, 0, 0, 0);
    if ( v15 )
      sub_10034930((int)v5);
  }
  else if ( a2 == 2 )
  {
    *a5 = 0;
    LocaleInfoW = GetLocaleInfoW(Locale, LCType, 0, 0);
    v12 = LocaleInfoW;
    if ( !LocaleInfoW
      || (v13 = (WCHAR *)sub_100DD9C0(LocaleInfoW, 2), (*a5 = (int)v13) == 0)
      || !GetLocaleInfoW(Locale, LCType, v13, v12) )
    {
      sub_10034930(*a5);
      *a5 = 0;
      return -1;
    }
  }
  else
  {
    if ( a2 )
      return -1;
    *(_DWORD *)LCData = 0;
    if ( !GetLocaleInfoW(Locale, LCType | 0x20000000, LCData, 2) )
      return -1;
    *(_BYTE *)a5 = LCData[0];
  }
  return 0;
}
