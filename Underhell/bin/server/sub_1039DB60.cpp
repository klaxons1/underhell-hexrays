int *sub_1039DB60()
{
  if ( (dword_106EA6A8 & 1) == 0 )
  {
    dword_106EA6A8 |= 1u;
    dword_106EA68C = (int)"CNPC_Puppet";
    dword_106EA694 = 0;
    dword_106EA698 = 0;
    dword_106EA69C = 0;
    dword_106EA6A0 = 0;
    dword_106EA6A4 = 0;
    dword_106EA690 = 11;
    atexit(sub_10478980);
  }
  dword_10678044 = (int)&dword_105FE114;
  dword_1067803C = 5;
  dword_10678038 = (int)&unk_106780E4;
  return &dword_10678038;
}
