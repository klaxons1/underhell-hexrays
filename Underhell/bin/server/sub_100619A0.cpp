int *sub_100619A0()
{
  if ( (dword_1069254C & 1) == 0 )
  {
    dword_1069254C |= 1u;
    dword_10692530 = (int)"CAI_BlendedMotor";
    dword_10692538 = 0;
    dword_1069253C = 0;
    dword_10692540 = 0;
    dword_10692544 = 0;
    dword_10692548 = 0;
    dword_10692534 = 16;
    atexit(sub_1046ED90);
  }
  dword_106063C0 = 0;
  dword_106063B8 = 1;
  dword_106063B4 = (int)&unk_106924FC;
  return &dword_106063B4;
}
