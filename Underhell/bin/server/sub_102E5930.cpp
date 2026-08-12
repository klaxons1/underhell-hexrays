int *sub_102E5930()
{
  if ( (dword_106E1578 & 1) == 0 )
  {
    dword_106E1578 |= 1u;
    dword_106E155C = (int)"CHL2PlayerLocalData";
    dword_106E1564 = 0;
    dword_106E1568 = 0;
    dword_106E156C = 0;
    dword_106E1570 = 0;
    dword_106E1574 = 0;
    dword_106E1560 = 19;
    atexit(sub_104774A0);
  }
  dword_106674D8 = 0;
  dword_106674D0 = 13;
  dword_106674CC = (int)&unk_1066751C;
  return &dword_106674CC;
}
