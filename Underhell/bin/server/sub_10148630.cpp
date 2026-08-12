int *sub_10148630()
{
  if ( (dword_106B1680 & 1) == 0 )
  {
    dword_106B1680 |= 1u;
    dword_106B1664 = (int)"CFuncAreaPortalWindow";
    dword_106B166C = 0;
    dword_106B1670 = 0;
    dword_106B1674 = 0;
    dword_106B1678 = 0;
    dword_106B167C = 0;
    dword_106B1668 = 21;
    atexit(sub_10471370);
  }
  dword_1062521C = (int)&dword_10625138;
  dword_10625214 = 7;
  dword_10625210 = (int)&unk_106252C4;
  return &dword_10625210;
}
