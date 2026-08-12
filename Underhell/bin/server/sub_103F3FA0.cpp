int *sub_103F3FA0()
{
  if ( (dword_106EEDD0 & 1) == 0 )
  {
    dword_106EEDD0 |= 1u;
    dword_106EEDB4 = (int)"CPropVehicleViewController";
    dword_106EEDBC = 0;
    dword_106EEDC0 = 0;
    dword_106EEDC4 = 0;
    dword_106EEDC8 = 0;
    dword_106EEDCC = 0;
    dword_106EEDB8 = 26;
    atexit(sub_10479470);
  }
  dword_1068467C = (int)&dword_10653D60;
  dword_10684674 = 2;
  dword_10684670 = (int)&unk_1068472C;
  return &dword_10684670;
}
