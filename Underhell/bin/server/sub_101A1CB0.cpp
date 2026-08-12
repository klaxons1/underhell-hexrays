int *sub_101A1CB0()
{
  if ( (dword_106B8CF0 & 1) == 0 )
  {
    dword_106B8CF0 |= 1u;
    dword_106B8CD4 = (int)"CNPC_Ace";
    dword_106B8CDC = 0;
    dword_106B8CE0 = 0;
    dword_106B8CE4 = 0;
    dword_106B8CE8 = 0;
    dword_106B8CEC = 0;
    dword_106B8CD8 = 8;
    atexit(sub_104729F0);
  }
  dword_106328A0 = (int)&dword_1066F6C4;
  dword_10632898 = 10;
  dword_10632894 = (int)&unk_1063293C;
  return &dword_10632894;
}
