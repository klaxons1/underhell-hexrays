int *sub_100F8AA0()
{
  if ( (dword_1069929C & 1) == 0 )
  {
    dword_1069929C |= 1u;
    dword_10699280 = (int)"CBaseViewModel";
    dword_10699288 = 0;
    dword_1069928C = 0;
    dword_10699290 = 0;
    dword_10699294 = 0;
    dword_10699298 = 0;
    dword_10699284 = 14;
    atexit(sub_10470110);
  }
  dword_106126D4 = (int)&dword_1060D0FC;
  if ( (dword_1069929C & 2) == 0 )
  {
    dword_1069929C |= 2u;
    if ( (dword_1069927C & 1) == 0 )
    {
      dword_1069927C |= 1u;
      dword_10699278 = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>,13>::`vftable';
    }
    dword_106128E4 = (int)&dword_10699278;
    dword_106128E8 = 0;
    dword_106128EC = 0;
    dword_106128F0 = 0;
    dword_106128F4 = 0;
    dword_106128F8 = 0;
    dword_106128FC = 0;
  }
  dword_106126CC = 7;
  dword_106126C8 = (int)asc_10612794;
  return &dword_106126C8;
}
