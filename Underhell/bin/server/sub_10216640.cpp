int *sub_10216640()
{
  if ( (dword_106C2A10 & 1) == 0 )
  {
    dword_106C2A10 |= 1u;
    dword_106C29F4 = (int)"CGameGibManager";
    dword_106C29FC = 0;
    dword_106C2A00 = 0;
    dword_106C2A04 = 0;
    dword_106C2A08 = 0;
    dword_106C2A0C = 0;
    dword_106C29F8 = 15;
    atexit(sub_10473B90);
  }
  dword_1064594C = (int)&dword_1060F348;
  dword_10645944 = 5;
  dword_10645940 = (int)&unk_10645ABC;
  return &dword_10645940;
}
