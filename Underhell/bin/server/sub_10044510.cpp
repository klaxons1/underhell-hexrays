_DWORD *__thiscall sub_10044510(int this, int a2)
{
  _DWORD *result; // eax

  if ( a2 && (*(_DWORD *)(this + 236) & 0x8000000) != 0 )
    sub_10029620((_DWORD *)this, 1, (int)"  Schedule cleared: %s\n");
  *(_DWORD *)(this + 2136) = 0;
  *(float *)(this + 2140) = 0.0;
  *(_DWORD *)(this + 2128) = 0;
  *(_DWORD *)(this + 2124) = 0;
  *(float *)(this + 2144) = 0.0;
  *(_DWORD *)(this + 2132) = 0;
  *(_DWORD *)(this + 2152) = 0;
  *(_WORD *)(this + 2156) = 0;
  result = (_DWORD *)(this + 2288);
  *(_BYTE *)(this + 2158) = 1;
  if ( this != -2288 )
  {
    *result = -1;
    *(_DWORD *)(this + 2292) = -1;
    *(_DWORD *)(this + 2296) = -1;
    *(_DWORD *)(this + 2300) = -1;
    *(_DWORD *)(this + 2304) = -1;
    *(_DWORD *)(this + 2308) = -1;
    *(_DWORD *)(this + 2312) = -1;
    *(_DWORD *)(this + 2316) = -1;
  }
  return result;
}
