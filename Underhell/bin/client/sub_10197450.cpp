int *sub_10197450()
{
  if ( (dword_1044817C & 1) == 0 )
  {
    dword_1044817C |= 1u;
    dword_10448160 = (int)"C_PropScalable";
    dword_10448168 = 0;
    dword_1044816C = 0;
    dword_10448170 = 0;
    dword_10448174 = 0;
    dword_10448178 = 0;
    dword_10448164 = 14;
    atexit(sub_102CD830);
  }
  dword_103EB1A8 = (int)&dword_103D8A64;
  dword_103EB1A0 = 2;
  dword_103EB19C = (int)&unk_103EB224;
  return &dword_103EB19C;
}
