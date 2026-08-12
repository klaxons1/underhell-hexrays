int *sub_100FC840()
{
  if ( (dword_10436120 & 1) == 0 )
  {
    dword_10436120 |= 1u;
    dword_10436104 = (int)"PhysBlockHeader_t";
    dword_1043610C = 0;
    dword_10436110 = 0;
    dword_10436114 = 0;
    dword_10436118 = 0;
    dword_1043611C = 0;
    dword_10436108 = 17;
    atexit(sub_102CB280);
  }
  dword_103E1DAC = 0;
  dword_103E1DA4 = 2;
  dword_103E1DA0 = (int)&unk_103E1EAC;
  return &dword_103E1DA0;
}
