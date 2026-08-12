int *sub_1037AF70()
{
  if ( (dword_106E9650 & 1) == 0 )
  {
    dword_106E9650 |= 1u;
    dword_106E9634 = (int)"CAI_HunterEscortBehavior";
    dword_106E963C = 0;
    dword_106E9640 = 0;
    dword_106E9644 = 0;
    dword_106E9648 = 0;
    dword_106E964C = 0;
    dword_106E9638 = 24;
    atexit(sub_104786A0);
  }
  dword_10674298 = (int)&dword_10602B70;
  dword_10674290 = 3;
  dword_1067428C = (int)&unk_106744FC;
  return &dword_1067428C;
}
