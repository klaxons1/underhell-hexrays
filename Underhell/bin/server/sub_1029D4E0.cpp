int *sub_1029D4E0()
{
  if ( (dword_106DB35C & 1) == 0 )
  {
    dword_106DB35C |= 1u;
    dword_106DB340 = (int)"CAI_FuncTankBehavior";
    dword_106DB348 = 0;
    dword_106DB34C = 0;
    dword_106DB350 = 0;
    dword_106DB354 = 0;
    dword_106DB358 = 0;
    dword_106DB344 = 20;
    atexit(sub_10476600);
  }
  dword_1065E4D8 = (int)&dword_10601D54;
  dword_1065E4D0 = 4;
  dword_1065E4CC = (int)&unk_1065E52C;
  return &dword_1065E4CC;
}
