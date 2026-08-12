char __stdcall sub_100BF9F0(unsigned __int16 *a1, const unsigned __int16 *a2, float *a3)
{
  unsigned __int16 *i; // ebx
  int v4; // eax
  unsigned __int16 *v5; // esi
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // edi
  unsigned __int16 v8; // ax
  bool v9; // zf
  wchar_t v10; // ax
  wchar_t *v11; // ecx
  wchar_t String[256]; // [esp+Ch] [ebp-400h] BYREF
  unsigned __int16 v14[256]; // [esp+20Ch] [ebp-200h] BYREF

  for ( i = a1; i; ++i )
  {
    v4 = *i;
    if ( !(_WORD)v4 )
      break;
    if ( v4 == 60 )
    {
      v5 = i + 1;
      String[0] = 0;
      v6 = i[1];
      v14[0] = 0;
      v7 = v14;
      if ( v6 )
      {
        do
        {
          if ( v6 == 58 )
            break;
          if ( v6 == 62 )
            break;
          if ( isspace(v6) )
            break;
          v8 = *v5++;
          *v7 = v8;
          v6 = *v5;
          ++v7;
        }
        while ( *v5 );
      }
      v9 = *v5 == 58;
      *v7 = 0;
      if ( v9 )
      {
        v10 = v5[1];
        ++v5;
        v11 = String;
        if ( v10 )
        {
          do
          {
            if ( v10 == 62 )
              break;
            ++v5;
            *v11 = v10;
            v10 = *v5;
            ++v11;
          }
          while ( *v5 );
        }
        *v11 = 0;
      }
      i += v5 - i;
      if ( !wcscmp(v14, a2) )
      {
        *a3 = wcstod(String, 0);
        return 1;
      }
    }
  }
  return 0;
}
