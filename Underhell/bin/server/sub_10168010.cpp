int *sub_10168010()
{
  if ( (dword_106B4F70 & 1) == 0 )
  {
    dword_106B4F70 |= 1u;
    dword_106B4F54 = (int)"CGlobalState";
    dword_106B4F5C = 0;
    dword_106B4F60 = 0;
    dword_106B4F64 = 0;
    dword_106B4F68 = 0;
    dword_106B4F6C = 0;
    dword_106B4F58 = 12;
    atexit(sub_10471BC0);
  }
  dword_10628BC0 = 0;
  if ( (dword_106B4F70 & 2) == 0 )
  {
    dword_106B4F70 |= 2u;
    if ( (dword_106B4F50 & 1) == 0 )
    {
      dword_106B4F50 |= 1u;
      dword_106B4F4C = (int)&CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>,10>::`vftable';
    }
    dword_10628CF4 = (int)&dword_106B4F4C;
    dword_10628CF8 = 0;
    dword_10628CFC = 0;
    dword_10628D00 = 0;
    dword_10628D04 = 0;
    dword_10628D08 = 0;
    dword_10628D0C = 0;
  }
  dword_10628BB8 = 1;
  dword_10628BB4 = (int)asc_10628CDC;
  return &dword_10628BB4;
}
