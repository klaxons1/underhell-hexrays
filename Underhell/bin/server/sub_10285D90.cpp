int *sub_10285D90()
{
  if ( (dword_106D4084 & 1) == 0 )
  {
    dword_106D4084 |= 1u;
    dword_106D4068 = (int)"DustTrail";
    dword_106D4070 = 0;
    dword_106D4074 = 0;
    dword_106D4078 = 0;
    dword_106D407C = 0;
    dword_106D4080 = 0;
    dword_106D406C = 9;
    atexit(sub_10475760);
  }
  dword_1065A9FC = (int)&dword_1060F348;
  dword_1065A9F4 = 14;
  dword_1065A9F0 = (int)&unk_1065B734;
  return &dword_1065A9F0;
}
