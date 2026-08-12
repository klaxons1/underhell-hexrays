int *sub_100FCA10()
{
  if ( (dword_1069A4B8 & 1) == 0 )
  {
    dword_1069A4B8 |= 1u;
    dword_1069A49C = (int)"CFuncVehicleClip";
    dword_1069A4A4 = 0;
    dword_1069A4A8 = 0;
    dword_1069A4AC = 0;
    dword_1069A4B0 = 0;
    dword_1069A4B4 = 0;
    dword_1069A4A0 = 16;
    atexit(sub_10470240);
  }
  dword_10613038 = (int)&dword_1060F348;
  dword_10613030 = 2;
  dword_1061302C = (int)&unk_106133EC;
  return &dword_1061302C;
}
