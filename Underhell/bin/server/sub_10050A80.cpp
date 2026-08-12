int *sub_10050A80()
{
  if ( (dword_10691F80 & 1) == 0 )
  {
    dword_10691F80 |= 1u;
    dword_10691F64 = (int)"CAI_FearBehavior";
    dword_10691F6C = 0;
    dword_10691F70 = 0;
    dword_10691F74 = 0;
    dword_10691F78 = 0;
    dword_10691F7C = 0;
    dword_10691F68 = 16;
    atexit(sub_1046EC10);
  }
  dword_10602990 = (int)&dword_10601D54;
  dword_10602988 = 6;
  dword_10602984 = (int)&unk_106029E4;
  return &dword_10602984;
}
