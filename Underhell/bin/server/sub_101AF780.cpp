int *sub_101AF780()
{
  if ( (dword_106B9C44 & 1) == 0 )
  {
    dword_106B9C44 |= 1u;
    dword_106B9C28 = (int)"CPhysThruster";
    dword_106B9C30 = 0;
    dword_106B9C34 = 0;
    dword_106B9C38 = 0;
    dword_106B9C3C = 0;
    dword_106B9C40 = 0;
    dword_106B9C2C = 13;
    atexit(sub_10472C50);
  }
  dword_1063562C = (int)&dword_10635608;
  dword_10635624 = 1;
  dword_10635620 = (int)&unk_10635BEC;
  return &dword_10635620;
}
