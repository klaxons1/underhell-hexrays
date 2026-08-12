int *sub_100967E0()
{
  if ( (dword_106939CC & 1) == 0 )
  {
    dword_106939CC |= 1u;
    dword_106939B0 = (int)"CAI_AllySpeechManager";
    dword_106939B8 = 0;
    dword_106939BC = 0;
    dword_106939C0 = 0;
    dword_106939C4 = 0;
    dword_106939C8 = 0;
    dword_106939B4 = 21;
    atexit(sub_1046F430);
  }
  dword_10609D6C = (int)&dword_1060F348;
  if ( (dword_106939CC & 2) == 0 )
  {
    dword_106939CC |= 2u;
    if ( (dword_106939A4 & 1) == 0 )
    {
      dword_106939A4 |= 1u;
      dword_106939A0 = (int)&CUtlMapDataOps<CUtlMap<string_t,CSimpleSimTimer,char>,2,10>::`vftable';
    }
    dword_10609F98 = (int)&dword_106939A0;
    dword_10609F9C = 0;
    dword_10609FA0 = 0;
    dword_10609FA4 = 0;
    dword_10609FA8 = 0;
    dword_10609FAC = 0;
    dword_10609FB0 = 0;
  }
  dword_10609D64 = 2;
  dword_10609D60 = (int)asc_10609F4C;
  return &dword_10609D60;
}
