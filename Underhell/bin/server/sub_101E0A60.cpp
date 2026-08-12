int *sub_101E0A60()
{
  if ( (dword_106BB1A0 & 1) == 0 )
  {
    dword_106BB1A0 |= 1u;
    dword_106BB184 = (int)"CPhysExplosion";
    dword_106BB18C = 0;
    dword_106BB190 = 0;
    dword_106BB194 = 0;
    dword_106BB198 = 0;
    dword_106BB19C = 0;
    dword_106BB188 = 14;
    atexit(sub_10473220);
  }
  dword_1063B068 = (int)&dword_1060F348;
  if ( (dword_106BB1A0 & 2) == 0 )
  {
    dword_106BB1A0 |= 2u;
    dword_1063BDF8 = (int)off_10614A2C;
    dword_1063BDFC = 0;
    dword_1063BE00 = 0;
    dword_1063BE04 = 0;
    dword_1063BE08 = 0;
    dword_1063BE0C = 0;
    dword_1063BE10 = 0;
  }
  dword_1063B060 = 6;
  dword_1063B05C = (int)&unk_1063BCDC;
  return &dword_1063B05C;
}
