int *sub_103F1170()
{
  if ( (dword_106EEA5C & 1) == 0 )
  {
    dword_106EEA5C |= 1u;
    dword_106EEA40 = (int)"CInfoTargetVehicleTransition";
    dword_106EEA48 = 0;
    dword_106EEA4C = 0;
    dword_106EEA50 = 0;
    dword_106EEA54 = 0;
    dword_106EEA58 = 0;
    dword_106EEA44 = 28;
    atexit(sub_10479410);
  }
  dword_106834AC = (int)&dword_1060F348;
  dword_106834A4 = 3;
  dword_106834A0 = (int)&unk_106838AC;
  return &dword_106834A0;
}
