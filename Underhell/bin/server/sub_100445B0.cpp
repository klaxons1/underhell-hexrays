void __thiscall sub_100445B0(int this, int a2)
{
  double v2; // st7
  bool v4; // al
  int v5; // ecx

  v2 = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 2140) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 2144) = v2;
  *(_BYTE *)(this + 2158) = 0;
  *(_DWORD *)(this + 2124) = a2;
  *(_DWORD *)(this + 2132) = 0;
  *(_DWORD *)(this + 2152) = 0;
  *(_WORD *)(this + 2156) = 0;
  *(_DWORD *)(this + 2136) = 0;
  *(_DWORD *)(this + 2160) = 0;
  v4 = sub_10023D10((_DWORD *)this, 1);
  if ( this != -2192 )
  {
    *(_DWORD *)(this + 2192) = 0;
    *(_DWORD *)(this + 2196) = 0;
    *(_DWORD *)(this + 2200) = 0;
    *(_DWORD *)(this + 2204) = 0;
    *(_DWORD *)(this + 2208) = 0;
    *(_DWORD *)(this + 2212) = 0;
    *(_DWORD *)(this + 2216) = 0;
    *(_DWORD *)(this + 2220) = 0;
  }
  if ( v4 )
    sub_10023CB0((char *)this, 1);
  v5 = *(_DWORD *)(this + 2588);
  *(_BYTE *)(this + 2321) = 0;
  sub_10081C10(v5);
  if ( this != -2288 )
  {
    *(_DWORD *)(this + 2288) = -1;
    *(_DWORD *)(this + 2292) = -1;
    *(_DWORD *)(this + 2296) = -1;
    *(_DWORD *)(this + 2300) = -1;
    *(_DWORD *)(this + 2304) = -1;
    *(_DWORD *)(this + 2308) = -1;
    *(_DWORD *)(this + 2312) = -1;
    *(_DWORD *)(this + 2316) = -1;
  }
  *(_DWORD *)(this + 2716) &= ~0x2000u;
  if ( (*(_DWORD *)(this + 236) & 0x8000000) != 0 )
    sub_10029620((_DWORD *)this, 1, (int)"Schedule: %s (time: %.2f)\n");
}
