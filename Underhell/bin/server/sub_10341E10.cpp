int *sub_10341E10()
{
  if ( (dword_106E65D0 & 1) == 0 )
  {
    dword_106E65D0 |= 1u;
    dword_106E65B4 = (int)"CNPC_Combine";
    dword_106E65BC = 0;
    dword_106E65C0 = 0;
    dword_106E65C4 = 0;
    dword_106E65C8 = 0;
    dword_106E65CC = 0;
    dword_106E65B8 = 12;
    atexit(sub_10477FA0);
  }
  dword_1066F6D0 = (int)&dword_105FD568;
  dword_1066F6C8 = 30;
  dword_1066F6C4 = (int)&unk_1066F7AC;
  return &dword_1066F6C4;
}
