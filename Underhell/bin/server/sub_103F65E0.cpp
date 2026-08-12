int *sub_103F65E0()
{
  if ( (dword_106EF3F8 & 1) == 0 )
  {
    dword_106EF3F8 |= 1u;
    dword_106EF3DC = (int)"CWeaponBugBait";
    dword_106EF3E4 = 0;
    dword_106EF3E8 = 0;
    dword_106EF3EC = 0;
    dword_106EF3F0 = 0;
    dword_106EF3F4 = 0;
    dword_106EF3E0 = 14;
    atexit(sub_104795E0);
  }
  dword_10684F84 = (int)&dword_106609CC;
  if ( (dword_106EF3F8 & 2) == 0 )
  {
    dword_106EF3F8 |= 2u;
    dword_106850F8 = (int)sub_100390B0((char **)&dword_106EF3DC, "BugbaitStickyTouch");
    dword_106850FC = 0;
    dword_10685100 = 0;
    dword_10685104 = 2097153;
    dword_10685108 = 0;
    dword_1068510C = 0;
    dword_10685110 = (int)sub_103F5D70;
    dword_10685114 = 0;
    dword_10685118 = 0;
    dword_1068511C = 0;
    dword_10685120 = 0;
    dword_10685124 = 0;
  }
  dword_10684F7C = 5;
  dword_10684F78 = (int)&unk_10685024;
  return &dword_10684F78;
}
