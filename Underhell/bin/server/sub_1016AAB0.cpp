int *sub_1016AAB0()
{
  if ( (dword_106B5210 & 1) == 0 )
  {
    dword_106B5210 |= 1u;
    dword_106B51F4 = (int)"CCycler";
    dword_106B51FC = 0;
    dword_106B5200 = 0;
    dword_106B5204 = 0;
    dword_106B5208 = 0;
    dword_106B520C = 0;
    dword_106B51F8 = 7;
    atexit(sub_10471C60);
  }
  dword_106291C0 = (int)&dword_105FE114;
  dword_106291B8 = 2;
  dword_106291B4 = (int)&unk_106293BC;
  return &dword_106291B4;
}
