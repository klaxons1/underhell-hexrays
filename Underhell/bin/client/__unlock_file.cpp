void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_103FE760 || Stream > &stru_103FE9C0 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_103FE760) >> 5) + 16);
  }
}
