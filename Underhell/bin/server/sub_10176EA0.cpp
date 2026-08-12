int *sub_10176EA0()
{
  if ( (dword_106B5C88 & 1) == 0 )
  {
    dword_106B5C88 |= 1u;
    dword_106B5C6C = (int)"CItemRandom";
    dword_106B5C74 = 0;
    dword_106B5C78 = 0;
    dword_106B5C7C = 0;
    dword_106B5C80 = 0;
    dword_106B5C84 = 0;
    dword_106B5C70 = 11;
    atexit(sub_10471E60);
  }
  dword_1062A6EC = (int)&dword_1060F348;
  dword_1062A6E4 = 82;
  dword_1062A6E0 = (int)&unk_1062A77C;
  return &dword_1062A6E0;
}
