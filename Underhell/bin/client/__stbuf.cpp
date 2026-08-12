int __cdecl _stbuf(FILE *Stream)
{
  int v1; // eax
  int v2; // eax
  char **v3; // edi
  int v4; // eax
  char *v5; // edi

  v1 = _fileno(Stream);
  if ( !_isatty(v1) )
    return 0;
  if ( Stream == (FILE *)(sub_1029A01C() + 8) )
  {
    v2 = 0;
  }
  else
  {
    if ( Stream != (FILE *)(sub_1029A01C() + 16) )
      return 0;
    v2 = 1;
  }
  ++dword_10482828;
  if ( (Stream->_flag & 0x10C) != 0 )
    return 0;
  v3 = (char **)((char *)&unk_1048282C + 4 * v2);
  if ( *v3 || (v4 = sub_100DDA40(4096), (*v3 = (char *)v4) != 0) )
  {
    v5 = *v3;
    Stream->_base = v5;
    Stream->_ptr = v5;
    Stream->_bufsiz = 4096;
    Stream->_cnt = 4096;
  }
  else
  {
    Stream->_base = (char *)&Stream->_charbuf;
    Stream->_ptr = (char *)&Stream->_charbuf;
    Stream->_bufsiz = 2;
    Stream->_cnt = 2;
  }
  Stream->_flag |= 0x1102u;
  return 1;
}
