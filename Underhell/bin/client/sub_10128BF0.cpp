unsigned int sub_10128BF0()
{
  unsigned int result; // eax

  result = dword_103E69B0;
  if ( dword_103E69B0 != -1 )
  {
    result = (unsigned int)dword_103E69B0 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 2) == (unsigned int)dword_103E69B0 >> 12 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 1) )
        return sub_10128B50();
    }
  }
  return result;
}
