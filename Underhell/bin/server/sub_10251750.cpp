int *sub_10251750()
{
  if ( (dword_106C7498 & 1) == 0 )
  {
    dword_106C7498 |= 1u;
    dword_106C747C = (int)"CFuncPlatRot";
    dword_106C7484 = 0;
    dword_106C7488 = 0;
    dword_106C748C = 0;
    dword_106C7490 = 0;
    dword_106C7494 = 0;
    dword_106C7480 = 12;
    atexit(sub_104746C0);
  }
  dword_1064FFC8 = (int)&dword_1064FFA4;
  dword_1064FFC0 = 2;
  dword_1064FFBC = (int)&unk_10650744;
  return &dword_1064FFBC;
}
