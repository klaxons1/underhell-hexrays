void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1068F4F0 || Stream > &stru_1068F750 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_1068F4F0) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}
