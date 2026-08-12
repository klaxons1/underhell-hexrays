int *sub_10127B90()
{
  if ( (dword_1069DA74 & 1) == 0 )
  {
    dword_1069DA74 |= 1u;
    dword_1069DA58 = (int)"CRotorWashShooter";
    dword_1069DA60 = 0;
    dword_1069DA64 = 0;
    dword_1069DA68 = 0;
    dword_1069DA6C = 0;
    dword_1069DA70 = 0;
    dword_1069DA5C = 17;
    atexit(sub_10470A00);
  }
  dword_106198C0 = (int)&dword_1061989C;
  dword_106198B8 = 4;
  dword_106198B4 = (int)&unk_1061A514;
  return &dword_106198B4;
}
