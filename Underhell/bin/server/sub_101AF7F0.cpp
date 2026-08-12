int *sub_101AF7F0()
{
  if ( (dword_106B9C64 & 1) == 0 )
  {
    dword_106B9C64 |= 1u;
    dword_106B9C48 = (int)"CPhysTorque";
    dword_106B9C50 = 0;
    dword_106B9C54 = 0;
    dword_106B9C58 = 0;
    dword_106B9C5C = 0;
    dword_106B9C60 = 0;
    dword_106B9C4C = 11;
    atexit(sub_10472C60);
  }
  dword_10635644 = (int)&dword_10635608;
  dword_1063563C = 1;
  dword_10635638 = (int)&unk_10635C54;
  return &dword_10635638;
}
