int *sub_103E7110()
{
  if ( (dword_106EE534 & 1) == 0 )
  {
    dword_106EE534 |= 1u;
    dword_106EE518 = (int)"CCraneTip";
    dword_106EE520 = 0;
    dword_106EE524 = 0;
    dword_106EE528 = 0;
    dword_106EE52C = 0;
    dword_106EE530 = 0;
    dword_106EE51C = 9;
    atexit(sub_104792E0);
  }
  dword_10681D80 = (int)&dword_1060D0FC;
  if ( (dword_106EE534 & 2) == 0 )
  {
    dword_106EE534 |= 2u;
    dword_10681EA4 = (int)sub_101D3250(3);
    dword_10681EA8 = 0;
    dword_10681EAC = 0;
    dword_10681EB0 = 0;
    dword_10681EB4 = 0;
    dword_10681EB8 = 0;
    dword_10681EBC = 0;
  }
  dword_10681D78 = 1;
  dword_10681D74 = (int)&unk_10681E8C;
  return &dword_10681D74;
}
