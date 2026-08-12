int *sub_103D7950()
{
  if ( (dword_106ED0F4 & 1) == 0 )
  {
    dword_106ED0F4 |= 1u;
    dword_106ED0D8 = (int)"CPropScalable";
    dword_106ED0E0 = 0;
    dword_106ED0E4 = 0;
    dword_106ED0E8 = 0;
    dword_106ED0EC = 0;
    dword_106ED0F0 = 0;
    dword_106ED0DC = 13;
    atexit(sub_10479050);
  }
  dword_1067F424 = (int)&dword_1060D0FC;
  dword_1067F41C = 12;
  dword_1067F418 = (int)&unk_1067F4C4;
  return &dword_1067F418;
}
