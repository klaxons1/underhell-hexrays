int *sub_10270B40()
{
  if ( (dword_106CF500 & 1) == 0 )
  {
    dword_106CF500 |= 1u;
    dword_106CF4E4 = (int)"vehicleview_t";
    dword_106CF4EC = 0;
    dword_106CF4F0 = 0;
    dword_106CF4F4 = 0;
    dword_106CF4F8 = 0;
    dword_106CF4FC = 0;
    dword_106CF4E8 = 13;
    atexit(sub_10474B30);
  }
  dword_10655380 = 0;
  dword_10655378 = 10;
  dword_10655374 = (int)&unk_10655504;
  return &dword_10655374;
}
