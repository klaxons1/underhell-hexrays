int *sub_10128F80()
{
  if ( (dword_10438220 & 1) == 0 )
  {
    dword_10438220 |= 1u;
    dword_10438204 = (int)"CTakeDamageInfo";
    dword_1043820C = 0;
    dword_10438210 = 0;
    dword_10438214 = 0;
    dword_10438218 = 0;
    dword_1043821C = 0;
    dword_10438208 = 15;
    atexit(sub_102CB930);
  }
  dword_103E693C = 0;
  dword_103E6934 = 13;
  dword_103E6930 = (int)&unk_103E69EC;
  return &dword_103E6930;
}
