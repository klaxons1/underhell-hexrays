int *sub_103D1A10()
{
  if ( (dword_106EC990 & 1) == 0 )
  {
    dword_106EC990 |= 1u;
    dword_106EC974 = (int)"CAPCController";
    dword_106EC97C = 0;
    dword_106EC980 = 0;
    dword_106EC984 = 0;
    dword_106EC988 = 0;
    dword_106EC98C = 0;
    dword_106EC978 = 14;
    atexit(sub_10478F50);
  }
  dword_1067E074 = (int)&dword_1060F348;
  if ( (dword_106EC990 & 2) == 0 )
  {
    dword_106EC990 |= 2u;
    dword_1067E534 = (int)off_10614A2C;
    dword_1067E538 = 0;
    dword_1067E53C = 0;
    dword_1067E540 = 0;
    dword_1067E544 = 0;
    dword_1067E548 = 0;
    dword_1067E54C = 0;
  }
  dword_1067E06C = 21;
  dword_1067E068 = (int)&unk_1067E10C;
  return &dword_1067E068;
}
