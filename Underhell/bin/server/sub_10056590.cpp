int *sub_10056590()
{
  if ( (dword_106920E4 & 1) == 0 )
  {
    dword_106920E4 |= 1u;
    dword_106920C8 = (int)"AI_FollowParams_t";
    dword_106920D0 = 0;
    dword_106920D4 = 0;
    dword_106920D8 = 0;
    dword_106920DC = 0;
    dword_106920E0 = 0;
    dword_106920CC = 17;
    atexit(sub_1046EC70);
  }
  dword_10602B64 = 0;
  dword_10602B5C = 2;
  dword_10602B58 = (int)&unk_10604054;
  return &dword_10602B58;
}
