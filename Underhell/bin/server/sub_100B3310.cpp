int *sub_100B3310()
{
  if ( (dword_106952B0 & 1) == 0 )
  {
    dword_106952B0 |= 1u;
    dword_10695294 = (int)"CAI_TacticalServices";
    dword_1069529C = 0;
    dword_106952A0 = 0;
    dword_106952A4 = 0;
    dword_106952A8 = 0;
    dword_106952AC = 0;
    dword_10695298 = 20;
    atexit(sub_1046F670);
  }
  dword_1060BBB4 = 0;
  dword_1060BBAC = 1;
  dword_1060BBA8 = (int)&unk_1060BBFC;
  return &dword_1060BBA8;
}
