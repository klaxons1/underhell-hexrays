void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1068F4F0 || Stream > &stru_1068F750 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_1068F4F0) >> 5) + 16);
  }
}
