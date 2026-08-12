int *sub_102AFB70()
{
  if ( (dword_106DBC94 & 1) == 0 )
  {
    dword_106DBC94 |= 1u;
    dword_106DBC78 = (int)"CEnvAR2Explosion";
    dword_106DBC80 = 0;
    dword_106DBC84 = 0;
    dword_106DBC88 = 0;
    dword_106DBC8C = 0;
    dword_106DBC90 = 0;
    dword_106DBC7C = 16;
    atexit(sub_104767E0);
  }
  dword_10660638 = (int)&dword_1060F348;
  dword_10660630 = 2;
  dword_1066062C = (int)&unk_1066078C;
  return &dword_1066062C;
}
