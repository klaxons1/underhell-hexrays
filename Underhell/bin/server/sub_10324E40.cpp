int *sub_10324E40()
{
  if ( (dword_106E53D0 & 1) == 0 )
  {
    dword_106E53D0 |= 1u;
    dword_106E53B4 = (int)"CBarnacleTongueTip";
    dword_106E53BC = 0;
    dword_106E53C0 = 0;
    dword_106E53C4 = 0;
    dword_106E53C8 = 0;
    dword_106E53CC = 0;
    dword_106E53B8 = 18;
    atexit(sub_10477BE0);
  }
  dword_1066D1B4 = (int)&dword_1060D0FC;
  if ( (dword_106E53D0 & 2) == 0 )
  {
    dword_106E53D0 |= 2u;
    dword_1066D390 = (int)sub_101D3250(3);
    dword_1066D394 = 0;
    dword_1066D398 = 0;
    dword_1066D39C = 0;
    dword_1066D3A0 = 0;
    dword_1066D3A4 = 0;
    dword_1066D3A8 = 0;
  }
  dword_1066D1AC = 2;
  dword_1066D1A8 = (int)&unk_1066D344;
  return &dword_1066D1A8;
}
