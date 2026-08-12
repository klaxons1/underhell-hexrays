int *sub_10390310()
{
  if ( (dword_106EA0F8 & 1) == 0 )
  {
    dword_106EA0F8 |= 1u;
    dword_106EA0DC = (int)"CNPC_MetroPolice";
    dword_106EA0E4 = 0;
    dword_106EA0E8 = 0;
    dword_106EA0EC = 0;
    dword_106EA0F0 = 0;
    dword_106EA0F4 = 0;
    dword_106EA0E0 = 16;
    atexit(sub_10478830);
  }
  dword_10676684 = (int)&dword_105FD568;
  if ( (dword_106EA0F8 & 2) == 0 )
  {
    dword_106EA0F8 |= 2u;
    dword_106772D0 = (int)sub_100390B0((char **)&dword_106EA0DC, "PrecriminalUse");
    word_106772DC = 1;
    word_106772DE = 32;
    dword_106772EC = 0;
    dword_106772F0 = 0;
    dword_106772F4 = 0;
    dword_106772F8 = 0;
    dword_106772FC = 0;
    word_10677310 = 1;
    word_10677312 = 22;
    dword_106772D4 = 0;
    dword_106772D8 = 0;
    dword_106772E0 = 0;
    dword_106772E4 = 0;
    dword_106772E8 = (int)sub_1038B680;
    dword_10677300 = 11;
    dword_10677304 = (int)"m_OnStunnedPlayer";
    dword_10677308 = 4372;
    dword_1067730C = 0;
    dword_10677314 = (int)"OnStunnedPlayer";
    dword_10677318 = (int)off_10614A2C;
    dword_1067731C = 0;
    dword_10677320 = 0;
    dword_10677324 = 0;
    dword_10677328 = 0;
    dword_1067732C = 0;
    dword_10677330 = 0;
    dword_10677334 = 11;
    dword_10677338 = (int)"m_OnCupCopped";
    dword_1067733C = 4396;
    dword_10677340 = 0;
    dword_10677344 = 1441793;
    dword_10677348 = (int)"OnCupCopped";
    dword_1067734C = (int)off_10614A2C;
    dword_10677350 = 0;
    dword_10677354 = 0;
    dword_10677358 = 0;
    dword_1067735C = 0;
    dword_10677360 = 0;
    dword_10677364 = 0;
  }
  dword_1067667C = 51;
  dword_10676678 = (int)asc_1067690C;
  return &dword_10676678;
}
