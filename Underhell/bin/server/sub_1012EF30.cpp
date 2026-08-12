int *sub_1012EF30()
{
  if ( (dword_106AE848 & 1) == 0 )
  {
    dword_106AE848 |= 1u;
    dword_106AE82C = (int)"CDebugHistory";
    dword_106AE834 = 0;
    dword_106AE838 = 0;
    dword_106AE83C = 0;
    dword_106AE840 = 0;
    dword_106AE844 = 0;
    dword_106AE830 = 13;
    atexit(sub_10470CF0);
  }
  dword_1061E2D8 = (int)&dword_1060F348;
  dword_1061E2D0 = 1;
  dword_1061E2CC = (int)&unk_106AE7F8;
  return &dword_1061E2CC;
}
