int *sub_101E0D40()
{
  if ( (dword_106BB200 & 1) == 0 )
  {
    dword_106BB200 |= 1u;
    dword_106BB1E4 = (int)"CPhysConvert";
    dword_106BB1EC = 0;
    dword_106BB1F0 = 0;
    dword_106BB1F4 = 0;
    dword_106BB1F8 = 0;
    dword_106BB1FC = 0;
    dword_106BB1E8 = 12;
    atexit(sub_10473250);
  }
  dword_1063B0B0 = (int)&dword_1060F348;
  if ( (dword_106BB200 & 2) == 0 )
  {
    dword_106BB200 |= 2u;
    dword_1063C0A0 = (int)off_10614A2C;
    dword_1063C0A4 = 0;
    dword_1063C0A8 = 0;
    dword_1063C0AC = 0;
    dword_1063C0B0 = 0;
    dword_1063C0B4 = 0;
    dword_1063C0B8 = 0;
  }
  dword_1063B0A8 = 4;
  dword_1063B0A4 = (int)&unk_1063BFEC;
  return &dword_1063B0A4;
}
