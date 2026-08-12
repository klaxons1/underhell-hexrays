int *sub_101735E0()
{
  if ( (dword_106B5B98 & 1) == 0 )
  {
    dword_106B5B98 |= 1u;
    dword_106B5B7C = (int)"CItemFlashlight";
    dword_106B5B84 = 0;
    dword_106B5B88 = 0;
    dword_106B5B8C = 0;
    dword_106B5B90 = 0;
    dword_106B5B94 = 0;
    dword_106B5B80 = 15;
    atexit(sub_10471E10);
  }
  dword_1062A050 = (int)&dword_1062B92C;
  if ( (dword_106B5B98 & 2) == 0 )
  {
    dword_106B5B98 |= 2u;
    dword_1062A16C = (int)off_10614A2C;
    dword_1062A170 = 0;
    dword_1062A174 = 0;
    dword_1062A178 = 0;
    dword_1062A17C = 0;
    dword_1062A180 = 0;
    dword_1062A184 = 0;
  }
  dword_1062A048 = 1;
  dword_1062A044 = (int)asc_1062A154;
  return &dword_1062A044;
}
