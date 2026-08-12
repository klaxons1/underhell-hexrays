int *sub_1005F300()
{
  if ( (dword_1040DBE4 & 1) == 0 )
  {
    dword_1040DBE4 |= 1u;
    dword_1040DBC8 = (int)"C_PointCommentaryNode";
    dword_1040DBD0 = 0;
    dword_1040DBD4 = 0;
    dword_1040DBD8 = 0;
    dword_1040DBDC = 0;
    dword_1040DBE0 = 0;
    dword_1040DBCC = 21;
    atexit(sub_102C8C30);
  }
  dword_103DB920 = (int)&dword_103D8A64;
  if ( (dword_1040DBE4 & 2) == 0 )
  {
    dword_1040DBE4 |= 2u;
    dword_103DBA3C = sub_101218D0();
    dword_103DBA40 = 0;
    dword_103DBA44 = 0;
    dword_103DBA48 = 0;
    dword_103DBA4C = 0;
    dword_103DBA50 = 0;
    dword_103DBA54 = 0;
  }
  dword_103DB918 = 3;
  dword_103DB914 = (int)&unk_103DB9BC;
  return &dword_103DB914;
}
