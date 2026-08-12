int *sub_10194CA0()
{
  if ( (dword_1044795C & 1) == 0 )
  {
    dword_1044795C |= 1u;
    dword_10447940 = (int)"C_NPC_Manhack";
    dword_10447948 = 0;
    dword_1044794C = 0;
    dword_10447950 = 0;
    dword_10447954 = 0;
    dword_10447958 = 0;
    dword_10447944 = 13;
    atexit(sub_102CD7D0);
  }
  dword_103EAFAC = (int)&dword_103D8A64;
  dword_103EAFA4 = 1;
  dword_103EAFA0 = (int)&unk_1044790C;
  return &dword_103EAFA0;
}
