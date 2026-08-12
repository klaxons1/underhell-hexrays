int *sub_1034C6C0()
{
  if ( (dword_106E6880 & 1) == 0 )
  {
    dword_106E6880 |= 1u;
    dword_106E6864 = (int)"CCombineDropshipContainer";
    dword_106E686C = 0;
    dword_106E6870 = 0;
    dword_106E6874 = 0;
    dword_106E6878 = 0;
    dword_106E687C = 0;
    dword_106E6868 = 25;
    atexit(sub_10478010);
  }
  dword_10670880 = (int)&dword_10642FF8;
  dword_10670878 = 3;
  dword_10670874 = (int)&unk_1067098C;
  return &dword_10670874;
}
