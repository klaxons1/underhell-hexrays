int *sub_100F22C0()
{
  if ( (dword_10698A18 & 1) == 0 )
  {
    dword_10698A18 |= 1u;
    dword_106989FC = (int)"flexweight_t";
    dword_10698A04 = 0;
    dword_10698A08 = 0;
    dword_10698A0C = 0;
    dword_10698A10 = 0;
    dword_10698A14 = 0;
    dword_10698A00 = 12;
    atexit(sub_10470030);
  }
  dword_106116B4 = 0;
  dword_106116AC = 3;
  dword_106116A8 = (int)&unk_10611E34;
  return &dword_106116A8;
}
