int *sub_10187B40()
{
  if ( (dword_106B6DE4 & 1) == 0 )
  {
    dword_106B6DE4 |= 1u;
    dword_106B6DC8 = (int)"CNPCMaker";
    dword_106B6DD0 = 0;
    dword_106B6DD4 = 0;
    dword_106B6DD8 = 0;
    dword_106B6DDC = 0;
    dword_106B6DE0 = 0;
    dword_106B6DCC = 9;
    atexit(sub_10472160);
  }
  dword_10631358 = (int)&dword_10631334;
  dword_10631350 = 6;
  dword_1063134C = (int)&unk_10631B8C;
  return &dword_1063134C;
}
