int *sub_102857A0()
{
  if ( (dword_106D3FE4 & 1) == 0 )
  {
    dword_106D3FE4 |= 1u;
    dword_106D3FC8 = (int)"SmokeTrail";
    dword_106D3FD0 = 0;
    dword_106D3FD4 = 0;
    dword_106D3FD8 = 0;
    dword_106D3FDC = 0;
    dword_106D3FE0 = 0;
    dword_106D3FCC = 10;
    atexit(sub_10475710);
  }
  dword_1065A970 = (int)&dword_1060F348;
  dword_1065A968 = 15;
  dword_1065A964 = (int)&unk_1065AC34;
  return &dword_1065A964;
}
