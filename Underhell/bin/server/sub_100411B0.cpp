int *sub_100411B0()
{
  if ( (dword_10691C00 & 1) == 0 )
  {
    dword_10691C00 |= 1u;
    dword_10691BE4 = (int)"AIExtendedSaveHeader_t";
    dword_10691BEC = 0;
    dword_10691BF0 = 0;
    dword_10691BF4 = 0;
    dword_10691BF8 = 0;
    dword_10691BFC = 0;
    dword_10691BE8 = 22;
    atexit(sub_1046EB20);
  }
  dword_105FE19C = 0;
  dword_105FE194 = 7;
  dword_105FE190 = (int)&unk_1060187C;
  return &dword_105FE190;
}
