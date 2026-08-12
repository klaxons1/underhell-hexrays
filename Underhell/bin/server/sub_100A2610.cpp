int *sub_100A2610()
{
  if ( (dword_1069416C & 1) == 0 )
  {
    dword_1069416C |= 1u;
    dword_10694150 = (int)"ResponseGroup";
    dword_10694158 = 0;
    dword_1069415C = 0;
    dword_10694160 = 0;
    dword_10694164 = 0;
    dword_10694168 = 0;
    dword_10694154 = 13;
    atexit(sub_1046F4D0);
  }
  dword_1060A530 = 0;
  dword_1060A528 = 3;
  dword_1060A524 = (int)&unk_1060A67C;
  return &dword_1060A524;
}
