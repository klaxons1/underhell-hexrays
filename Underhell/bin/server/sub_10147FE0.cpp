int *sub_10147FE0()
{
  if ( (dword_106B148C & 1) == 0 )
  {
    dword_106B148C |= 1u;
    dword_106B1470 = (int)"CFuncAreaPortalBase";
    dword_106B1478 = 0;
    dword_106B147C = 0;
    dword_106B1480 = 0;
    dword_106B1484 = 0;
    dword_106B1488 = 0;
    dword_106B1474 = 19;
    atexit(sub_10471330);
  }
  dword_10625144 = (int)&dword_1060F348;
  dword_1062513C = 2;
  dword_10625138 = (int)&unk_106251A4;
  return &dword_10625138;
}
