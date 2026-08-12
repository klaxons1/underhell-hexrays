int *sub_102AFB00()
{
  if ( (dword_106DBC74 & 1) == 0 )
  {
    dword_106DBC74 |= 1u;
    dword_106DBC58 = (int)"AR2Explosion";
    dword_106DBC60 = 0;
    dword_106DBC64 = 0;
    dword_106DBC68 = 0;
    dword_106DBC6C = 0;
    dword_106DBC70 = 0;
    dword_106DBC5C = 12;
    atexit(sub_104767D0);
  }
  dword_10660620 = (int)&dword_1060F348;
  dword_10660618 = 1;
  dword_10660614 = (int)&unk_10660724;
  return &dword_10660614;
}
