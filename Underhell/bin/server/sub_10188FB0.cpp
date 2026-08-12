int *sub_10188FB0()
{
  if ( (dword_106B6EC8 & 1) == 0 )
  {
    dword_106B6EC8 |= 1u;
    dword_106B6EAC = (int)"CPathKeyFrame";
    dword_106B6EB4 = 0;
    dword_106B6EB8 = 0;
    dword_106B6EBC = 0;
    dword_106B6EC0 = 0;
    dword_106B6EC4 = 0;
    dword_106B6EB0 = 13;
    atexit(sub_104721B0);
  }
  dword_10631FD4 = (int)&dword_1060F348;
  dword_10631FCC = 8;
  dword_10631FC8 = (int)&unk_106320D4;
  return &dword_10631FC8;
}
