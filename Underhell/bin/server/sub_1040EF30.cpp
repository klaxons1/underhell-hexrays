int *sub_1040EF30()
{
  if ( (dword_106F0F18 & 1) == 0 )
  {
    dword_106F0F18 |= 1u;
    dword_106F0EFC = (int)"CGrenadeBeamChaser";
    dword_106F0F04 = 0;
    dword_106F0F08 = 0;
    dword_106F0F0C = 0;
    dword_106F0F10 = 0;
    dword_106F0F14 = 0;
    dword_106F0F00 = 18;
    atexit(sub_10479C30);
  }
  dword_10687E84 = (int)&dword_1060D0FC;
  if ( (dword_106F0F18 & 2) == 0 )
  {
    dword_106F0F18 |= 2u;
    dword_1068826C = (int)sub_100390B0((char **)&dword_106F0EFC, "ChaserThink");
    dword_10688270 = 0;
    dword_10688274 = 0;
    dword_10688278 = 2097153;
    dword_1068827C = 0;
    dword_10688280 = 0;
    dword_10688284 = (int)sub_1040EA70;
    dword_10688288 = 0;
    dword_1068828C = 0;
    dword_10688290 = 0;
    dword_10688294 = 0;
    dword_10688298 = 0;
  }
  dword_10687E7C = 2;
  dword_10687E78 = (int)&unk_10688234;
  return &dword_10687E78;
}
