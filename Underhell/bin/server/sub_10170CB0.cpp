int *sub_10170CB0()
{
  if ( (dword_106B59B0 & 1) == 0 )
  {
    dword_106B59B0 |= 1u;
    dword_106B5994 = (int)"CInfoCameraLink";
    dword_106B599C = 0;
    dword_106B59A0 = 0;
    dword_106B59A4 = 0;
    dword_106B59A8 = 0;
    dword_106B59AC = 0;
    dword_106B5998 = 15;
    atexit(sub_10471D80);
  }
  dword_10629744 = (int)&dword_1060F348;
  dword_1062973C = 4;
  dword_10629738 = (int)&unk_106297E4;
  return &dword_10629738;
}
