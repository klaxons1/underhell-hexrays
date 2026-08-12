int *sub_1015B660()
{
  if ( (dword_1043E83C & 1) == 0 )
  {
    dword_1043E83C |= 1u;
    dword_1043E820 = (int)"C_PropVehicleDriveable";
    dword_1043E828 = 0;
    dword_1043E82C = 0;
    dword_1043E830 = 0;
    dword_1043E834 = 0;
    dword_1043E838 = 0;
    dword_1043E824 = 22;
    atexit(sub_102CCAF0);
  }
  dword_103E9084 = (int)&dword_103D8A64;
  dword_103E907C = 1;
  dword_103E9078 = (int)&unk_103E90DC;
  return &dword_103E9078;
}
