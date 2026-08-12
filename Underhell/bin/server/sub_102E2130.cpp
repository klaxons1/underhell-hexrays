int *sub_102E2130()
{
  if ( (dword_106E1050 & 1) == 0 )
  {
    dword_106E1050 |= 1u;
    dword_106E1034 = (int)"LadderMove_t";
    dword_106E103C = 0;
    dword_106E1040 = 0;
    dword_106E1044 = 0;
    dword_106E1048 = 0;
    dword_106E104C = 0;
    dword_106E1038 = 12;
    atexit(sub_10477440);
  }
  dword_10665E08 = 0;
  dword_10665E00 = 8;
  dword_10665DFC = (int)&unk_10665FDC;
  return &dword_10665DFC;
}
