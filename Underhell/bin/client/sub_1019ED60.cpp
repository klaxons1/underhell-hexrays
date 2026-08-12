int *sub_1019ED60()
{
  if ( (dword_104490CC & 1) == 0 )
  {
    dword_104490CC |= 1u;
    dword_104490B0 = (int)"C_PropAirboat";
    dword_104490B8 = 0;
    dword_104490BC = 0;
    dword_104490C0 = 0;
    dword_104490C4 = 0;
    dword_104490C8 = 0;
    dword_104490B4 = 13;
    atexit(sub_102CD960);
  }
  dword_103EB49C = (int)&dword_103E9078;
  dword_103EB494 = 4;
  dword_103EB490 = (int)&unk_103EB514;
  return &dword_103EB490;
}
