int __cdecl _flswbuf(unsigned __int16 a1, FILE *Stream)
{
  int flag; // eax
  int v5; // eax
  unsigned int v6; // eax
  char *base; // eax
  char *ptr; // edi
  signed int v9; // edi
  _BYTE *v10; // eax
  __int64 v11; // rax
  unsigned __int16 v12; // bx
  int Buf; // [esp+4h] [ebp-4h] BYREF
  int Streama; // [esp+14h] [ebp+Ch]

  Streama = _fileno(Stream);
  flag = Stream->_flag;
  if ( (flag & 0x82) == 0 )
  {
    *_errno() = 9;
LABEL_3:
    Stream->_flag |= 0x20u;
    return 0xFFFF;
  }
  if ( (flag & 0x40) != 0 )
  {
    *_errno() = 34;
    goto LABEL_3;
  }
  if ( (flag & 1) != 0 )
  {
    Stream->_cnt = 0;
    if ( (flag & 0x10) == 0 )
    {
      Stream->_flag = flag | 0x20;
      return 0xFFFF;
    }
    Stream->_ptr = Stream->_base;
    Stream->_flag = flag & 0xFFFFFFFE;
  }
  v5 = Stream->_flag;
  Stream->_cnt = 0;
  Buf = 0;
  v6 = v5 & 0xFFFFFFED | 2;
  Stream->_flag = v6;
  if ( (v6 & 0x10C) == 0
    && (Stream != (FILE *)(sub_1029A01C() + 8) && Stream != (FILE *)(sub_1029A01C() + 16) || !_isatty(Streama)) )
  {
    _getbuf(Stream);
  }
  if ( (Stream->_flag & 0x108) != 0 )
  {
    base = Stream->_base;
    ptr = Stream->_ptr;
    Stream->_ptr = base + 2;
    v9 = ptr - base;
    Stream->_cnt = Stream->_bufsiz - 2;
    if ( v9 <= 0 )
    {
      if ( Streama == -1 || Streama == -2 )
        v10 = &unk_103FE5B8;
      else
        v10 = (_BYTE *)(dword_1048ABE0[Streama >> 5] + ((Streama & 0x1F) << 6));
      if ( (v10[4] & 0x20) != 0 )
      {
        v11 = _lseeki64(Streama, 0, 2);
        if ( (HIDWORD(v11) & (unsigned int)v11) == 0xFFFFFFFF )
          goto LABEL_28;
      }
    }
    else
    {
      Buf = _write(Streama, base, v9);
    }
    v12 = a1;
    *(_WORD *)Stream->_base = a1;
  }
  else
  {
    v9 = 2;
    v12 = a1;
    LOWORD(Buf) = a1;
    Buf = _write(Streama, &Buf, 2u);
  }
  if ( Buf != v9 )
  {
LABEL_28:
    Stream->_flag |= 0x20u;
    return 0xFFFF;
  }
  return v12;
}
