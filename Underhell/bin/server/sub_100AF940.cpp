int *sub_100AF940()
{
  if ( (dword_10695194 & 1) == 0 )
  {
    dword_10695194 |= 1u;
    dword_10695178 = (int)"CAI_Expresser";
    dword_10695180 = 0;
    dword_10695184 = 0;
    dword_10695188 = 0;
    dword_1069518C = 0;
    dword_10695190 = 0;
    dword_1069517C = 13;
    atexit(sub_1046F600);
  }
  dword_1060B418 = 0;
  dword_1060B410 = 6;
  dword_1060B40C = (int)&unk_1060B544;
  return &dword_1060B40C;
}
