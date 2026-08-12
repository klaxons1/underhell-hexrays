int *sub_1014E930()
{
  if ( (dword_106B2144 & 1) == 0 )
  {
    dword_106B2144 |= 1u;
    dword_106B2128 = (int)"CFunc_Dust";
    dword_106B2130 = 0;
    dword_106B2134 = 0;
    dword_106B2138 = 0;
    dword_106B213C = 0;
    dword_106B2140 = 0;
    dword_106B212C = 10;
    atexit(sub_10471480);
  }
  dword_106262AC = (int)&dword_1060F348;
  dword_106262A4 = 13;
  dword_106262A0 = (int)&unk_10626484;
  return &dword_106262A0;
}
