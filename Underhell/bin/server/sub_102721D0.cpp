int *sub_102721D0()
{
  if ( (dword_106CF84C & 1) == 0 )
  {
    dword_106CF84C |= 1u;
    dword_106CF830 = (int)"CVGuiScreen";
    dword_106CF838 = 0;
    dword_106CF83C = 0;
    dword_106CF840 = 0;
    dword_106CF844 = 0;
    dword_106CF848 = 0;
    dword_106CF834 = 11;
    atexit(sub_10474B90);
  }
  dword_10655E88 = (int)&dword_1060F348;
  dword_10655E80 = 9;
  dword_10655E7C = (int)asc_10655F24;
  return &dword_10655E7C;
}
