int *sub_1005CB80()
{
  if ( (dword_10692370 & 1) == 0 )
  {
    dword_10692370 |= 1u;
    dword_10692354 = (int)"CRopeAnchor";
    dword_1069235C = 0;
    dword_10692360 = 0;
    dword_10692364 = 0;
    dword_10692368 = 0;
    dword_1069236C = 0;
    dword_10692358 = 11;
    atexit(sub_1046ECF0);
  }
  dword_10605490 = (int)&dword_1060F348;
  if ( (dword_10692370 & 2) == 0 )
  {
    dword_10692370 |= 2u;
    dword_10605674 = (int)sub_100390B0((char **)&dword_10692354, "FallThink");
    word_10605680 = 1;
    word_10605682 = 32;
    dword_10605678 = 0;
    dword_1060567C = 0;
    dword_10605684 = 0;
    dword_10605688 = 0;
    dword_1060568C = (int)sub_1005BCF0;
    dword_10605690 = 0;
    dword_10605694 = 0;
    dword_10605698 = 0;
    dword_1060569C = 0;
    dword_106056A0 = 0;
    dword_106056A4 = 0;
    dword_106056A8 = (int)sub_100390B0((char **)&dword_10692354, "RemoveThink");
    dword_106056AC = 0;
    dword_106056B0 = 0;
    dword_106056B4 = 2097153;
    dword_106056B8 = 0;
    dword_106056BC = 0;
    dword_106056C0 = (int)sub_1005BBA0;
    dword_106056C4 = 0;
    dword_106056C8 = 0;
    dword_106056CC = 0;
    dword_106056D0 = 0;
    dword_106056D4 = 0;
  }
  dword_10605488 = 3;
  dword_10605484 = (int)&unk_1060563C;
  return &dword_10605484;
}
