int *sub_102858A0()
{
  if ( (dword_106D4024 & 1) == 0 )
  {
    dword_106D4024 |= 1u;
    dword_106D4008 = (int)"SporeTrail";
    dword_106D4010 = 0;
    dword_106D4014 = 0;
    dword_106D4018 = 0;
    dword_106D401C = 0;
    dword_106D4020 = 0;
    dword_106D400C = 10;
    atexit(sub_10475730);
  }
  dword_1065A9A8 = (int)&dword_1060F348;
  dword_1065A9A0 = 7;
  dword_1065A99C = (int)&unk_1065B2B4;
  return &dword_1065A99C;
}
