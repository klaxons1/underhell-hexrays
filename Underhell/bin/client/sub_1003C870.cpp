int *sub_1003C870()
{
  if ( (dword_10405868 & 1) == 0 )
  {
    dword_10405868 |= 1u;
    dword_1040584C = (int)"C_BaseEntity";
    dword_10405854 = 0;
    dword_10405858 = 0;
    dword_1040585C = 0;
    dword_10405860 = 0;
    dword_10405864 = 0;
    dword_10405850 = 12;
    atexit(sub_102C85F0);
  }
  dword_103D8A70 = 0;
  dword_103D8A68 = 5;
  dword_103D8A64 = (int)&unk_103D92D4;
  return &dword_103D8A64;
}
