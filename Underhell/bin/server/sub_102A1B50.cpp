int *sub_102A1B50()
{
  if ( (dword_106DB5F0 & 1) == 0 )
  {
    dword_106DB5F0 |= 1u;
    dword_106DB5D4 = (int)"passengerVehicleState_t";
    dword_106DB5DC = 0;
    dword_106DB5E0 = 0;
    dword_106DB5E4 = 0;
    dword_106DB5E8 = 0;
    dword_106DB5EC = 0;
    dword_106DB5D8 = 23;
    atexit(sub_10476670);
  }
  dword_1065EAD8 = 0;
  dword_1065EAD0 = 8;
  dword_1065EACC = (int)&unk_1065EE2C;
  return &dword_1065EACC;
}
