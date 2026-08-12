int *sub_10092BD0()
{
  if ( (dword_1042CB0C & 1) == 0 )
  {
    dword_1042CB0C |= 1u;
    dword_1042CAF0 = (int)"CompiledCaptionHeader_t";
    dword_1042CAF8 = 0;
    dword_1042CAFC = 0;
    dword_1042CB00 = 0;
    dword_1042CB04 = 0;
    dword_1042CB08 = 0;
    dword_1042CAF4 = 23;
    atexit(sub_102C95F0);
  }
  dword_103DD92C = 0;
  dword_103DD924 = 6;
  dword_103DD920 = (int)&unk_103DD98C;
  return &dword_103DD920;
}
