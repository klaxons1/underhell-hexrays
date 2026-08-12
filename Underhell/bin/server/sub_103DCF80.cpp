int *sub_103DCF80()
{
  if ( (dword_106ED3E0 & 1) == 0 )
  {
    dword_106ED3E0 |= 1u;
    dword_106ED3C4 = (int)"CSniperTarget";
    dword_106ED3CC = 0;
    dword_106ED3D0 = 0;
    dword_106ED3D4 = 0;
    dword_106ED3D8 = 0;
    dword_106ED3DC = 0;
    dword_106ED3C8 = 13;
    atexit(sub_104790E0);
  }
  dword_1067FA04 = (int)&dword_1060F348;
  dword_1067F9FC = 1;
  dword_1067F9F8 = (int)&unk_1067FB7C;
  return &dword_1067F9F8;
}
