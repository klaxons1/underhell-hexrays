int *sub_10412C60()
{
  if ( (dword_106F10B0 & 1) == 0 )
  {
    dword_106F10B0 |= 1u;
    dword_106F1094 = (int)"CNPC_MissileDefense";
    dword_106F109C = 0;
    dword_106F10A0 = 0;
    dword_106F10A4 = 0;
    dword_106F10A8 = 0;
    dword_106F10AC = 0;
    dword_106F1098 = 19;
    atexit(sub_10479CB0);
  }
  dword_1068893C = (int)&dword_105FE114;
  dword_10688934 = 3;
  dword_10688930 = (int)&unk_106889E4;
  return &dword_10688930;
}
