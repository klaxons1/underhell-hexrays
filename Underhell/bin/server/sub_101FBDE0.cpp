int *sub_101FBDE0()
{
  if ( (dword_106C003C & 1) == 0 )
  {
    dword_106C003C |= 1u;
    dword_106C0020 = (int)"CPlayerResource";
    dword_106C0028 = 0;
    dword_106C002C = 0;
    dword_106C0030 = 0;
    dword_106C0034 = 0;
    dword_106C0038 = 0;
    dword_106C0024 = 15;
    atexit(sub_10473670);
  }
  dword_1063EC4C = (int)&dword_1060F348;
  if ( (dword_106C003C & 2) == 0 )
  {
    dword_106C003C |= 2u;
    dword_106BFFF0 = (int)sub_100390B0((char **)&dword_106C0020, "ResourceThink");
    dword_106BFFF4 = 0;
    dword_106BFFF8 = 0;
    dword_106BFFFC = 2097153;
    dword_106C0000 = 0;
    dword_106C0004 = 0;
    dword_106C0008 = (int)sub_1029D7A0;
    dword_106C000C = 0;
    dword_106C0010 = 0;
    dword_106C0014 = 0;
    dword_106C0018 = 0;
    dword_106C001C = 0;
  }
  dword_1063EC44 = 1;
  dword_1063EC40 = (int)&unk_106BFFEC;
  return &dword_1063EC40;
}
