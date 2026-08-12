int *sub_10166FB0()
{
  if ( (dword_106B4F30 & 1) == 0 )
  {
    dword_106B4F30 |= 1u;
    dword_106B4F14 = (int)"CGib";
    dword_106B4F1C = 0;
    dword_106B4F20 = 0;
    dword_106B4F24 = 0;
    dword_106B4F28 = 0;
    dword_106B4F2C = 0;
    dword_106B4F18 = 4;
    atexit(sub_10471B70);
  }
  dword_10628B34 = (int)&dword_1060D0FC;
  if ( (dword_106B4F30 & 2) == 0 )
  {
    dword_106B4F30 |= 2u;
    dword_106B4E48 = (int)sub_100390B0((char **)&dword_106B4F14, "BounceGibTouch");
    word_106B4E54 = 1;
    word_106B4E56 = 32;
    dword_106B4E4C = 0;
    dword_106B4E50 = 0;
    dword_106B4E58 = 0;
    dword_106B4E5C = 0;
    dword_106B4E60 = (int)sub_10166740;
    dword_106B4E64 = 0;
    dword_106B4E68 = 0;
    dword_106B4E6C = 0;
    dword_106B4E70 = 0;
    dword_106B4E74 = 0;
    dword_106B4E78 = 0;
    dword_106B4E7C = (int)sub_100390B0((char **)&dword_106B4F14, "StickyGibTouch");
    word_106B4E8A = 32;
    dword_106B4E80 = 0;
    dword_106B4E84 = 0;
    word_106B4E88 = 1;
    dword_106B4E8C = 0;
    dword_106B4E90 = 0;
    dword_106B4E94 = (int)sub_10166900;
    dword_106B4E98 = 0;
    dword_106B4E9C = 0;
    dword_106B4EA0 = 0;
    dword_106B4EA4 = 0;
    dword_106B4EA8 = 0;
    dword_106B4EAC = 0;
    dword_106B4EB0 = (int)sub_100390B0((char **)&dword_106B4F14, "WaitTillLand");
    word_106B4EBC = 1;
    dword_106B4EB4 = 0;
    dword_106B4EB8 = 0;
    word_106B4EBE = 32;
    dword_106B4EC0 = 0;
    dword_106B4EC4 = 0;
    dword_106B4EC8 = (int)sub_10166BE0;
    dword_106B4ECC = 0;
    dword_106B4ED0 = 0;
    dword_106B4ED4 = 0;
    dword_106B4ED8 = 0;
    dword_106B4EDC = 0;
    dword_106B4EE0 = 0;
    dword_106B4EE4 = (int)sub_100390B0((char **)&dword_106B4F14, "DieThink");
    dword_106B4EE8 = 0;
    dword_106B4EEC = 0;
    dword_106B4EF0 = 2097153;
    dword_106B4EF4 = 0;
    dword_106B4EF8 = 0;
    dword_106B4EFC = (int)sub_10166450;
    dword_106B4F00 = 0;
    dword_106B4F04 = 0;
    dword_106B4F08 = 0;
    dword_106B4F0C = 0;
    dword_106B4F10 = 0;
  }
  dword_10628B2C = 4;
  dword_10628B28 = (int)&unk_106B4E44;
  return &dword_10628B28;
}
