int *sub_100512C0()
{
  if ( (dword_1040B2EC & 1) == 0 )
  {
    dword_1040B2EC |= 1u;
    dword_1040B2D0 = (int)"C_BreakableSurface";
    dword_1040B2D8 = 0;
    dword_1040B2DC = 0;
    dword_1040B2E0 = 0;
    dword_1040B2E4 = 0;
    dword_1040B2E8 = 0;
    dword_1040B2D4 = 18;
    atexit(sub_102C8940);
  }
  dword_103DAD5C = (int)&dword_103D8A64;
  dword_103DAD54 = 1;
  dword_103DAD50 = (int)asc_103DAE24;
  return &dword_103DAD50;
}
