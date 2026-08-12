int *sub_100F2140()
{
  if ( (dword_106989B8 & 1) == 0 )
  {
    dword_106989B8 |= 1u;
    dword_1069899C = (int)"CFlexCycler";
    dword_106989A4 = 0;
    dword_106989A8 = 0;
    dword_106989AC = 0;
    dword_106989B0 = 0;
    dword_106989B4 = 0;
    dword_106989A0 = 11;
    atexit(sub_10470000);
  }
  dword_106112A0 = (int)&dword_1061127C;
  dword_10611298 = 11;
  dword_10611294 = (int)&unk_106117AC;
  return &dword_10611294;
}
