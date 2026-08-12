int *sub_10253350()
{
  if ( (dword_106C7544 & 1) == 0 )
  {
    dword_106C7544 |= 1u;
    dword_106C7528 = (int)"CFuncTrackChange";
    dword_106C7530 = 0;
    dword_106C7534 = 0;
    dword_106C7538 = 0;
    dword_106C753C = 0;
    dword_106C7540 = 0;
    dword_106C752C = 16;
    atexit(sub_10474700);
  }
  dword_1065002C = (int)&dword_1064FFBC;
  if ( (dword_106C7544 & 2) == 0 )
  {
    dword_106C7544 |= 2u;
    dword_106509BC = (int)sub_100390B0((char **)&dword_106C7528, "Find");
    dword_106509C0 = 0;
    dword_106509C4 = 0;
    dword_106509C8 = 2097153;
    dword_106509CC = 0;
    dword_106509D0 = 0;
    dword_106509D4 = (int)sub_1024E430;
    dword_106509D8 = 0;
    dword_106509DC = 0;
    dword_106509E0 = 0;
    dword_106509E4 = 0;
    dword_106509E8 = 0;
  }
  dword_10650024 = 10;
  dword_10650020 = (int)&unk_106507E4;
  return &dword_10650020;
}
