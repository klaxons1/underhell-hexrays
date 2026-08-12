int *sub_103ECD80()
{
  if ( (dword_106EE6B4 & 1) == 0 )
  {
    dword_106EE6B4 |= 1u;
    dword_106EE698 = (int)"JeepWaterData_t";
    dword_106EE6A0 = 0;
    dword_106EE6A4 = 0;
    dword_106EE6A8 = 0;
    dword_106EE6AC = 0;
    dword_106EE6B0 = 0;
    dword_106EE69C = 15;
    atexit(sub_10479370);
  }
  dword_10682B1C = 0;
  dword_10682B14 = 6;
  dword_10682B10 = (int)&unk_10682BAC;
  return &dword_10682B10;
}
