wint_t __cdecl _fputwc_nolock(wchar_t Character, FILE *Stream)
{
  int *v2; // edi
  _BYTE *v3; // eax
  int *v4; // edi
  _BYTE *v5; // eax
  int *v6; // edi
  char *v7; // eax
  wint_t result; // ax
  int v9; // edi
  bool v10; // sf
  int v11; // eax
  int SizeConverted; // [esp+Ch] [ebp-10h] BYREF
  char MbCh[8]; // [esp+10h] [ebp-Ch] BYREF

  if ( (Stream->_flag & 0x40) != 0
    || (_fileno(Stream) == -1 || _fileno(Stream) == -2
      ? (v3 = &unk_103FE5B8)
      : (v2 = &dword_1048ABE0[_fileno(Stream) >> 5], v3 = (_BYTE *)(*v2 + ((_fileno(Stream) & 0x1F) << 6))),
        (v3[36] & 0x7F) == 2
     || (_fileno(Stream) == -1 || _fileno(Stream) == -2
       ? (v5 = &unk_103FE5B8)
       : (v4 = &dword_1048ABE0[_fileno(Stream) >> 5], v5 = (_BYTE *)(*v4 + ((_fileno(Stream) & 0x1F) << 6))),
         (v5[36] & 0x7F) == 1
      || (_fileno(Stream) == -1 || _fileno(Stream) == -2
        ? (v7 = (char *)&unk_103FE5B8)
        : (v6 = &dword_1048ABE0[_fileno(Stream) >> 5], v7 = (char *)(*v6 + ((_fileno(Stream) & 0x1F) << 6))),
          v7[4] >= 0))) )
  {
    v10 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v10 )
    {
      return _flswbuf(Character, Stream);
    }
    else
    {
      result = Character;
      *(_WORD *)Stream->_ptr = Character;
      Stream->_ptr += 2;
    }
  }
  else
  {
    if ( wctomb_s(&SizeConverted, MbCh, 5u, Character) )
      return -1;
    v9 = 0;
    if ( SizeConverted > 0 )
    {
      while ( 1 )
      {
        v10 = --Stream->_cnt < 0;
        if ( v10 )
        {
          v11 = _flsbuf(MbCh[v9], Stream);
        }
        else
        {
          *Stream->_ptr = MbCh[v9];
          v11 = *(unsigned __int8 *)Stream->_ptr++;
        }
        if ( v11 == -1 )
          break;
        if ( ++v9 >= SizeConverted )
          return Character;
      }
      return -1;
    }
    return Character;
  }
  return result;
}
