int *sub_102F1D50()
{
  if ( (dword_106E25B4 & 1) == 0 )
  {
    dword_106E25B4 |= 1u;
    dword_106E2598 = (int)"CItem_ItemCrate";
    dword_106E25A0 = 0;
    dword_106E25A4 = 0;
    dword_106E25A8 = 0;
    dword_106E25AC = 0;
    dword_106E25B0 = 0;
    dword_106E259C = 15;
    atexit(sub_10477680);
  }
  dword_10669608 = (int)&dword_10642FF8;
  if ( (dword_106E25B4 & 2) == 0 )
  {
    dword_106E25B4 |= 2u;
    dword_106697F4 = (int)off_10614A2C;
    dword_106697F8 = 0;
    dword_106697FC = 0;
    dword_10669800 = 0;
    dword_10669804 = 0;
    dword_10669808 = 0;
    dword_1066980C = 0;
  }
  dword_10669600 = 7;
  dword_106695FC = (int)&unk_106696A4;
  return &dword_106695FC;
}
