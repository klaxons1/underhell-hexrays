int *sub_103BCAC0()
{
  if ( (dword_106EBB4C & 1) == 0 )
  {
    dword_106EBB4C |= 1u;
    dword_106EBB30 = (int)"CNPCSimpleTalkerExpresser";
    dword_106EBB38 = 0;
    dword_106EBB3C = 0;
    dword_106EBB40 = 0;
    dword_106EBB44 = 0;
    dword_106EBB48 = 0;
    dword_106EBB34 = 25;
    atexit(sub_10478CF0);
  }
  dword_1067B358 = 0;
  dword_1067B350 = 4;
  dword_1067B34C = (int)&unk_1067B3D4;
  return &dword_1067B34C;
}
