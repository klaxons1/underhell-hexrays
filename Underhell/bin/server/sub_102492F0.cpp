int *sub_102492F0()
{
  if ( (dword_106C62EC & 1) == 0 )
  {
    dword_106C62EC |= 1u;
    dword_106C62D0 = (int)"CFuncTankTrain";
    dword_106C62D8 = 0;
    dword_106C62DC = 0;
    dword_106C62E0 = 0;
    dword_106C62E4 = 0;
    dword_106C62E8 = 0;
    dword_106C62D4 = 14;
    atexit(sub_10474380);
  }
  dword_1064F124 = (int)&dword_1064FFEC;
  if ( (dword_106C62EC & 2) == 0 )
  {
    dword_106C62EC |= 2u;
    dword_1064F2CC = (int)off_10614A2C;
    dword_1064F2D0 = 0;
    dword_1064F2D4 = 0;
    dword_1064F2D8 = 0;
    dword_1064F2DC = 0;
    dword_1064F2E0 = 0;
    dword_1064F2E4 = 0;
  }
  dword_1064F11C = 1;
  dword_1064F118 = (int)asc_1064F2B4;
  return &dword_1064F118;
}
