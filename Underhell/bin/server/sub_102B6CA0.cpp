int *sub_102B6CA0()
{
  if ( (dword_106DCCDC & 1) == 0 )
  {
    dword_106DCCDC |= 1u;
    dword_106DCCC0 = (int)"CCitadelEnergyCore";
    dword_106DCCC8 = 0;
    dword_106DCCCC = 0;
    dword_106DCCD0 = 0;
    dword_106DCCD4 = 0;
    dword_106DCCD8 = 0;
    dword_106DCCC4 = 18;
    atexit(sub_10476980);
  }
  dword_10660EBC = (int)&dword_1060F348;
  dword_10660EB4 = 7;
  dword_10660EB0 = (int)&unk_10660F64;
  return &dword_10660EB0;
}
