float *sub_1040A700()
{
  if ( (dword_106F08D8 & 1) == 0 )
  {
    dword_106F08D8 |= 1u;
    flt_106F08CC = 0.043620002;
    flt_106F08D0 = 0.043620002;
    flt_106F08D4 = 0.043620002;
  }
  return &flt_106F08CC;
}
