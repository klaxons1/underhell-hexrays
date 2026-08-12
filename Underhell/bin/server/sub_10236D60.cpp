int *sub_10236D60()
{
  if ( (dword_106C4B08 & 1) == 0 )
  {
    dword_106C4B08 |= 1u;
    dword_106C4AEC = (int)"CSkyCamera";
    dword_106C4AF4 = 0;
    dword_106C4AF8 = 0;
    dword_106C4AFC = 0;
    dword_106C4B00 = 0;
    dword_106C4B04 = 0;
    dword_106C4AF0 = 10;
    atexit(sub_10473F40);
  }
  dword_1064ACD4 = (int)&dword_1060F348;
  dword_1064ACCC = 12;
  dword_1064ACC8 = (int)&unk_1064ADE4;
  return &dword_1064ACC8;
}
