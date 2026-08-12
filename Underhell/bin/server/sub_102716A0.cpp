int *sub_102716A0()
{
  if ( (dword_106CF574 & 1) == 0 )
  {
    dword_106CF574 |= 1u;
    dword_106CF558 = (int)"ViewSmoothingData_t";
    dword_106CF560 = 0;
    dword_106CF564 = 0;
    dword_106CF568 = 0;
    dword_106CF56C = 0;
    dword_106CF570 = 0;
    dword_106CF55C = 19;
    atexit(sub_10474B50);
  }
  dword_10655C64 = 0;
  dword_10655C5C = 9;
  dword_10655C58 = (int)&unk_10655CA4;
  return &dword_10655C58;
}
