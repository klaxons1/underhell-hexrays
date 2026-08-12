int *sub_10120410()
{
  if ( (dword_1069C714 & 1) == 0 )
  {
    dword_1069C714 |= 1u;
    dword_1069C6F8 = (int)"CRotDoor";
    dword_1069C700 = 0;
    dword_1069C704 = 0;
    dword_1069C708 = 0;
    dword_1069C70C = 0;
    dword_1069C710 = 0;
    dword_1069C6FC = 8;
    atexit(sub_10470840);
  }
  dword_10616B18 = (int)&dword_10616AF0;
  dword_10616B10 = 1;
  dword_10616B0C = (int)&unk_10616BDC;
  return &dword_10616B0C;
}
