int *sub_100F2340()
{
  if ( (dword_10698A38 & 1) == 0 )
  {
    dword_10698A38 |= 1u;
    dword_10698A1C = (int)"CBaseFlex";
    dword_10698A24 = 0;
    dword_10698A28 = 0;
    dword_10698A2C = 0;
    dword_10698A30 = 0;
    dword_10698A34 = 0;
    dword_10698A20 = 9;
    atexit(sub_10470040);
  }
  dword_10611288 = (int)&dword_1060DB84;
  dword_10611280 = 6;
  dword_1061127C = (int)&unk_10611F04;
  return &dword_1061127C;
}
