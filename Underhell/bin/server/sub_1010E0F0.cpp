int *sub_1010E0F0()
{
  if ( (dword_1069AB9C & 1) == 0 )
  {
    dword_1069AB9C |= 1u;
    dword_1069AB80 = (int)"CBaseEntityOutput";
    dword_1069AB88 = 0;
    dword_1069AB8C = 0;
    dword_1069AB90 = 0;
    dword_1069AB94 = 0;
    dword_1069AB98 = 0;
    dword_1069AB84 = 17;
    atexit(sub_104703D0);
  }
  dword_10614A20 = 0;
  if ( (dword_1069AB9C & 2) == 0 )
  {
    dword_1069AB9C |= 2u;
    dword_10614F94 = (int)off_10614CA0;
    dword_10614F98 = 0;
    dword_10614F9C = 0;
    dword_10614FA0 = 0;
    dword_10614FA4 = 0;
    dword_10614FA8 = 0;
    dword_10614FAC = 0;
  }
  dword_10614A18 = 1;
  dword_10614A14 = (int)&unk_10614F7C;
  return &dword_10614A14;
}
