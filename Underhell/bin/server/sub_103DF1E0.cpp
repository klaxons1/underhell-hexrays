int *sub_103DF1E0()
{
  if ( (dword_106EDB70 & 1) == 0 )
  {
    dword_106EDB70 |= 1u;
    dword_106EDB54 = (int)"CScriptIntro";
    dword_106EDB5C = 0;
    dword_106EDB60 = 0;
    dword_106EDB64 = 0;
    dword_106EDB68 = 0;
    dword_106EDB6C = 0;
    dword_106EDB58 = 12;
    atexit(sub_10479190);
  }
  dword_10680868 = (int)&dword_1060F348;
  if ( (dword_106EDB70 & 2) == 0 )
  {
    dword_106EDB70 |= 2u;
    dword_10680F88 = (int)sub_100390B0((char **)&dword_106EDB54, "BlendComplete");
    dword_10680F8C = 0;
    dword_10680F90 = 0;
    dword_10680F94 = 2097153;
    dword_10680F98 = 0;
    dword_10680F9C = 0;
    dword_10680FA0 = (int)sub_103DED10;
    dword_10680FA4 = 0;
    dword_10680FA8 = 0;
    dword_10680FAC = 0;
    dword_10680FB0 = 0;
    dword_10680FB4 = 0;
  }
  dword_10680860 = 33;
  dword_1068085C = (int)&unk_10680904;
  return &dword_1068085C;
}
