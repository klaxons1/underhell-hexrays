int *sub_103B8950()
{
  if ( (dword_106EBA84 & 1) == 0 )
  {
    dword_106EBA84 |= 1u;
    dword_106EBA68 = (int)"CStriderMinigun";
    dword_106EBA70 = 0;
    dword_106EBA74 = 0;
    dword_106EBA78 = 0;
    dword_106EBA7C = 0;
    dword_106EBA80 = 0;
    dword_106EBA6C = 15;
    atexit(sub_10478CD0);
  }
  dword_10679DDC = 0;
  dword_10679DD4 = 19;
  dword_10679DD0 = (int)&unk_10679FCC;
  return &dword_10679DD0;
}
