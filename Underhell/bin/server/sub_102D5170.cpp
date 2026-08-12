int *sub_102D5170()
{
  if ( (dword_106DE724 & 1) == 0 )
  {
    dword_106DE724 |= 1u;
    dword_106DE708 = (int)"CGrenadeBugBait";
    dword_106DE710 = 0;
    dword_106DE714 = 0;
    dword_106DE718 = 0;
    dword_106DE71C = 0;
    dword_106DE720 = 0;
    dword_106DE70C = 15;
    atexit(sub_10476D40);
  }
  dword_1066553C = (int)&dword_106121C8;
  if ( (dword_106DE724 & 2) == 0 )
  {
    dword_106DE724 |= 2u;
    dword_10665840 = (int)sub_100390B0((char **)&dword_106DE708, "BugBaitTouch");
    word_1066584C = 1;
    word_1066584E = 32;
    dword_10665844 = 0;
    dword_10665848 = 0;
    dword_10665850 = 0;
    dword_10665854 = 0;
    dword_10665858 = (int)sub_102D4DB0;
    dword_1066585C = 0;
    dword_10665860 = 0;
    dword_10665864 = 0;
    dword_10665868 = 0;
    dword_1066586C = 0;
    dword_10665870 = 0;
    dword_10665874 = (int)sub_100390B0((char **)&dword_106DE708, "ThinkBecomeSolid");
    dword_10665878 = 0;
    dword_1066587C = 0;
    dword_10665880 = 2097153;
    dword_10665884 = 0;
    dword_10665888 = 0;
    dword_1066588C = (int)sub_102D48F0;
    dword_10665890 = 0;
    dword_10665894 = 0;
    dword_10665898 = 0;
    dword_1066589C = 0;
    dword_106658A0 = 0;
  }
  dword_10665534 = 4;
  dword_10665530 = (int)&unk_106657D4;
  return &dword_10665530;
}
