int *sub_10092C50()
{
  if ( (dword_1042CB2C & 1) == 0 )
  {
    dword_1042CB2C |= 1u;
    dword_1042CB10 = (int)"CaptionLookup_t";
    dword_1042CB18 = 0;
    dword_1042CB1C = 0;
    dword_1042CB20 = 0;
    dword_1042CB24 = 0;
    dword_1042CB28 = 0;
    dword_1042CB14 = 15;
    atexit(sub_102C9600);
  }
  dword_103DD944 = 0;
  dword_103DD93C = 4;
  dword_103DD938 = (int)&unk_103DDAFC;
  return &dword_103DD938;
}
