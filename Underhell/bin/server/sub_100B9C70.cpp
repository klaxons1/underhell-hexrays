int *sub_100B9C70()
{
  if ( (dword_106954F4 & 1) == 0 )
  {
    dword_106954F4 |= 1u;
    dword_106954D8 = (int)"AI_Waypoint_t";
    dword_106954E0 = 0;
    dword_106954E4 = 0;
    dword_106954E8 = 0;
    dword_106954EC = 0;
    dword_106954F0 = 0;
    dword_106954DC = 13;
    atexit(sub_1046F710);
  }
  dword_1060CE00 = 0;
  dword_1060CDF8 = 6;
  dword_1060CDF4 = (int)&unk_1060CE44;
  return &dword_1060CDF4;
}
