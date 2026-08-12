int __cdecl _ftbuf(int a1, FILE *Stream)
{
  int result; // eax

  if ( a1 )
  {
    if ( (Stream->_flag & 0x1000) != 0 )
    {
      result = _flush(Stream);
      Stream->_flag &= 0xFFFFEEFF;
      Stream->_bufsiz = 0;
      Stream->_ptr = 0;
      Stream->_base = 0;
    }
  }
  return result;
}
