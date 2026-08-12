int *sub_1006ADC0()
{
  if ( (dword_10692EA4 & 1) == 0 )
  {
    dword_10692EA4 |= 1u;
    dword_10692E88 = (int)"CAI_DynamicLinkController";
    dword_10692E90 = 0;
    dword_10692E94 = 0;
    dword_10692E98 = 0;
    dword_10692E9C = 0;
    dword_10692EA0 = 0;
    dword_10692E8C = 25;
    atexit(sub_1046F100);
  }
  dword_1060680C = (int)&dword_1060F348;
  dword_10606804 = 8;
  dword_10606800 = (int)&unk_106069C4;
  return &dword_10606800;
}
