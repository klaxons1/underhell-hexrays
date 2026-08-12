char __stdcall sub_100BFD80(unsigned __int16 *a1, float *a2)
{
  unsigned __int16 *i; // ebx
  int v3; // eax
  unsigned __int16 v4; // ax
  unsigned __int16 *v5; // esi
  unsigned __int16 *j; // edi
  unsigned __int16 v7; // cx
  bool v8; // zf
  wchar_t v9; // ax
  wchar_t *v10; // ecx
  wchar_t String[256]; // [esp+Ch] [ebp-400h] BYREF
  unsigned __int16 v13[256]; // [esp+20Ch] [ebp-200h] BYREF

  *a2 = 0.0;
  for ( i = a1; i; ++i )
  {
    v3 = *i;
    if ( !(_WORD)v3 )
      break;
    if ( v3 == 60 )
    {
      v4 = i[1];
      v5 = i + 1;
      String[0] = 0;
      v13[0] = 0;
      for ( j = v13; v4; ++j )
      {
        if ( v4 == 58 )
          break;
        if ( v4 == 62 )
          break;
        if ( isspace(v4) )
          break;
        v7 = *v5;
        v4 = v5[1];
        ++v5;
        *j = v7;
      }
      v8 = *v5 == 58;
      *j = 0;
      if ( v8 )
      {
        v9 = v5[1];
        ++v5;
        v10 = String;
        if ( v9 )
        {
          do
          {
            if ( v9 == 62 )
              break;
            ++v5;
            *v10 = v9;
            v9 = *v5;
            ++v10;
          }
          while ( *v5 );
        }
        *v10 = 0;
      }
      i += v5 - i;
      if ( !wcscmp(v13, L"norepeat") )
      {
        *a2 = wcstod(String, 0);
        return 1;
      }
    }
  }
  return 0;
}
