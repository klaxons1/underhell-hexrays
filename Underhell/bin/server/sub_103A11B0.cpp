int *sub_103A11B0()
{
  if ( (dword_106EAA40 & 1) == 0 )
  {
    dword_106EAA40 |= 1u;
    dword_106EAA24 = (int)"CRollerController";
    dword_106EAA2C = 0;
    dword_106EAA30 = 0;
    dword_106EAA34 = 0;
    dword_106EAA38 = 0;
    dword_106EAA3C = 0;
    dword_106EAA28 = 17;
    atexit(sub_10478A00);
  }
  dword_106781F4 = 0;
  dword_106781EC = 3;
  dword_106781E8 = (int)&unk_106783C4;
  return &dword_106781E8;
}
