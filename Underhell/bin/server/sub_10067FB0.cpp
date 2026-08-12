int *sub_10067FB0()
{
  if ( (dword_10692E10 & 1) == 0 )
  {
    dword_10692E10 |= 1u;
    dword_10692DF4 = (int)"AI_Response";
    dword_10692DFC = 0;
    dword_10692E00 = 0;
    dword_10692E04 = 0;
    dword_10692E08 = 0;
    dword_10692E0C = 0;
    dword_10692DF8 = 11;
    atexit(sub_1046F0D0);
  }
  dword_106063FC = 0;
  dword_106063F4 = 4;
  dword_106063F0 = (int)&unk_10606574;
  return &dword_106063F0;
}
