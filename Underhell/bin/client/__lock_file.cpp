void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_103FE760 || Stream > &stru_103FE9C0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_103FE760) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}
