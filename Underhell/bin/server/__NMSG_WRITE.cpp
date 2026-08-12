_BYTE *__cdecl _NMSG_WRITE(int a1)
{
  _BYTE *result; // eax
  _BYTE *v2; // edi
  size_t v3; // eax
  void *v4; // esi
  unsigned int i; // eax
  size_t v6; // eax
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-1FCh] BYREF
  char Buffer[500]; // [esp+10h] [ebp-1F8h] BYREF

  result = _GET_RTERRMSG(a1);
  v2 = result;
  NumberOfBytesWritten = (DWORD)result;
  if ( result )
  {
    if ( _set_error_mode(3) == 1 || (result = (_BYTE *)_set_error_mode(3)) == 0 && dword_10700B28 == 1 )
    {
      result = GetStdHandle(0xFFFFFFF4);
      v4 = result;
      if ( result && result != (_BYTE *)-1 )
      {
        for ( i = 0; i < 0x1F4; ++i )
        {
          Buffer[i] = v2[2 * i];
          if ( !*(_WORD *)&v2[2 * i] )
            break;
        }
        Buffer[499] = 0;
        v6 = strlen(Buffer);
        return (_BYTE *)WriteFile(v4, Buffer, v6, &NumberOfBytesWritten, 0);
      }
    }
    else if ( a1 != 252 )
    {
      if ( wcscpy_s(&word_10700B38, 0x314u, L"Runtime Error!\n\nProgram: ") )
        _invoke_watson(0, 0, 0, 0, 0);
      word_10700D72 = 0;
      if ( !GetModuleFileNameW(0, Filename, 0x104u) && wcscpy_s(Filename, 0x2FBu, L"<program name unknown>")
        || wcslen(Filename) + 1 > 0x3C
        && (v3 = wcslen(Filename), wcsncpy_s(&word_10700AF4 + v3, 763 - (&word_10700AF4 + v3 - Filename), L"...", 3u))
        || wcscat_s(&word_10700B38, 0x314u, L"\n\n")
        || wcscat_s(&word_10700B38, 0x314u, (const wchar_t *)NumberOfBytesWritten) )
      {
        _invoke_watson(0, 0, 0, 0, 0);
      }
      return (_BYTE *)sub_10443197(&word_10700B38, L"Microsoft Visual C++ Runtime Library", 73744);
    }
  }
  return result;
}
