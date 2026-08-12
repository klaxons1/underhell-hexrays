int *sub_103F7C40()
{
  if ( (dword_106EF890 & 1) == 0 )
  {
    dword_106EF890 |= 1u;
    dword_106EF874 = (int)"CCrossbowBolt";
    dword_106EF87C = 0;
    dword_106EF880 = 0;
    dword_106EF884 = 0;
    dword_106EF888 = 0;
    dword_106EF88C = 0;
    dword_106EF878 = 13;
    atexit(sub_104796E0);
  }
  dword_1068526C = (int)&dword_1060E098;
  if ( (dword_106EF890 & 2) == 0 )
  {
    dword_106EF890 |= 2u;
    dword_106EF810 = (int)sub_100390B0((char **)&dword_106EF874, "BubbleThink");
    dword_106EF814 = 0;
    dword_106EF818 = 0;
    dword_106EF81C = 2097153;
    dword_106EF820 = 0;
    dword_106EF824 = 0;
    dword_106EF828 = (int)sub_103F7010;
    dword_106EF82C = 0;
    dword_106EF830 = 0;
    dword_106EF834 = 0;
    dword_106EF838 = 0;
    dword_106EF83C = 0;
    dword_106EF840 = 0;
    dword_106EF844 = (int)sub_100390B0((char **)&dword_106EF874, "BoltTouch");
    dword_106EF848 = 0;
    dword_106EF84C = 0;
    dword_106EF850 = 2097153;
    dword_106EF854 = 0;
    dword_106EF858 = 0;
    dword_106EF85C = (int)sub_103F7190;
    dword_106EF860 = 0;
    dword_106EF864 = 0;
    dword_106EF868 = 0;
    dword_106EF86C = 0;
    dword_106EF870 = 0;
  }
  dword_10685264 = 2;
  dword_10685260 = (int)&unk_106EF80C;
  return &dword_10685260;
}
