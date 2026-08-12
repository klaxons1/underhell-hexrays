int *sub_1006D560()
{
  if ( (dword_10692F20 & 1) == 0 )
  {
    dword_10692F20 |= 1u;
    dword_10692F04 = (int)"CNPCEventResponseSystemEntity";
    dword_10692F0C = 0;
    dword_10692F10 = 0;
    dword_10692F14 = 0;
    dword_10692F18 = 0;
    dword_10692F1C = 0;
    dword_10692F08 = 29;
    atexit(sub_1046F140);
  }
  dword_10606E54 = (int)&dword_1060F348;
  dword_10606E4C = 3;
  dword_10606E48 = (int)&unk_10606F34;
  return &dword_10606E48;
}
