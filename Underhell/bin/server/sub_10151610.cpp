int *sub_10151610()
{
  if ( (dword_106B27A4 & 1) == 0 )
  {
    dword_106B27A4 |= 1u;
    dword_106B2788 = (int)"CFuncOccluder";
    dword_106B2790 = 0;
    dword_106B2794 = 0;
    dword_106B2798 = 0;
    dword_106B279C = 0;
    dword_106B27A0 = 0;
    dword_106B278C = 13;
    atexit(sub_104715B0);
  }
  dword_10626FD4 = (int)&dword_1060F348;
  dword_10626FCC = 5;
  dword_10626FC8 = (int)&unk_1062706C;
  return &dword_10626FC8;
}
