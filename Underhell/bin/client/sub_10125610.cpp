int *sub_10125610()
{
  if ( (dword_1043813C & 1) == 0 )
  {
    dword_1043813C |= 1u;
    dword_10438120 = (int)"TrailPoint_t";
    dword_10438128 = 0;
    dword_1043812C = 0;
    dword_10438130 = 0;
    dword_10438134 = 0;
    dword_10438138 = 0;
    dword_10438124 = 12;
    atexit(sub_102CB8F0);
  }
  dword_103E63AC = 0;
  dword_103E63A4 = 4;
  dword_103E63A0 = (int)&unk_103E645C;
  return &dword_103E63A0;
}
