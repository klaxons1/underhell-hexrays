int *_tzset_nolock()
{
  const char *v0; // eax
  const char *v1; // esi
  size_t v2; // eax
  size_t v3; // eax
  int v4; // edi
  int v5; // edi
  int v6; // edi
  LPSTR *v7; // edi
  const char *v8; // esi
  char v9; // al
  int *result; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // esi
  int v15; // [esp+14h] [ebp-38h]
  unsigned int CodePage; // [esp+18h] [ebp-34h]
  BOOL UsedDefaultChar; // [esp+1Ch] [ebp-30h] BYREF
  int v18; // [esp+20h] [ebp-2Ch]
  int v19; // [esp+24h] [ebp-28h] BYREF
  int v20; // [esp+28h] [ebp-24h] BYREF
  LPSTR *v21; // [esp+2Ch] [ebp-20h]
  int v22; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v15 = 0;
  v18 = 0;
  v22 = 0;
  v20 = 0;
  v19 = 0;
  _lock(7);
  ms_exc.registration.TryLevel = 0;
  v21 = (LPSTR *)sub_10440516();
  if ( sub_104404D7(&v22) || sub_1044047D(&v20) || sub_104404AA(&v19) )
LABEL_12:
    _invoke_watson(0, 0, 0, 0, 0);
  CodePage = ___lc_codepage_func();
  dword_10701284 = 0;
  dword_1068F394 = -1;
  dword_1068F388 = -1;
  v0 = (const char *)_getenv_helper_nolock("TZ");
  v1 = v0;
  if ( !v0 || !*v0 )
  {
    if ( Destination )
    {
      sub_10184660((int)Destination);
      Destination = 0;
    }
    if ( GetTimeZoneInformation(&TimeZoneInformation) != -1 )
    {
      dword_10701284 = 1;
      v22 = 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.StandardDate.wMonth )
        v22 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias )
      {
        v20 = 1;
        v19 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
      }
      else
      {
        v20 = 0;
        v19 = 0;
      }
      if ( !WideCharToMultiByte(CodePage, 0, TimeZoneInformation.StandardName, -1, *v21, 63, 0, &UsedDefaultChar)
        || UsedDefaultChar )
      {
        **v21 = 0;
      }
      else
      {
        (*v21)[63] = 0;
      }
      if ( !WideCharToMultiByte(CodePage, 0, TimeZoneInformation.DaylightName, -1, v21[1], 63, 0, &UsedDefaultChar)
        || UsedDefaultChar )
      {
        *v21[1] = 0;
      }
      else
      {
        v21[1][63] = 0;
      }
    }
    goto LABEL_30;
  }
  if ( Destination )
  {
    if ( !strcmp(v0, Destination) )
    {
LABEL_30:
      v18 = 1;
      goto LABEL_31;
    }
    if ( Destination )
      sub_10184660((int)Destination);
  }
  v2 = strlen(v1);
  Destination = (char *)sub_10184390(v2 + 1);
  if ( !Destination )
    goto LABEL_30;
  v3 = strlen(v1);
  if ( strcpy_s(Destination, v3 + 1, v1) )
    goto LABEL_12;
LABEL_31:
  v4 = v22;
  *(_DWORD *)sub_10440510() = v4;
  v5 = v20;
  *(_DWORD *)sub_10440504() = v5;
  v6 = v19;
  *(_DWORD *)sub_1044050A() = v6;
  ms_exc.registration.TryLevel = -2;
  result = (int *)_unlock(7);
  if ( !v18 )
  {
    v7 = v21;
    if ( strncpy_s(*v21, 0x40u, v1, 3u) )
      goto LABEL_12;
    v8 = v1 + 3;
    if ( *v8 == 45 )
    {
      v15 = 1;
      ++v8;
    }
    v22 = 3600 * atol(v8);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 != 43 && (v9 < 48 || v9 > 57) )
        break;
      ++v8;
    }
    if ( *v8 == 58 )
    {
      v11 = atol(++v8);
      v22 += 60 * v11;
      while ( *v8 >= 48 && *v8 <= 57 )
        ++v8;
      if ( *v8 == 58 )
      {
        v12 = atol(++v8);
        v22 += v12;
        while ( *v8 >= 48 && *v8 <= 57 )
          ++v8;
      }
    }
    if ( v15 )
      v22 = -v22;
    v20 = *v8;
    if ( v20 )
    {
      if ( strncpy_s(v7[1], 0x40u, v8, 3u) )
        goto LABEL_12;
    }
    else
    {
      *v7[1] = 0;
    }
    v13 = v22;
    *(_DWORD *)sub_10440510() = v13;
    v14 = v20;
    result = (int *)sub_10440504();
    *result = v14;
  }
  return result;
}
