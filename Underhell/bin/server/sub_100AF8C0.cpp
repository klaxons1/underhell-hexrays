int *sub_100AF8C0()
{
  if ( (dword_10695174 & 1) == 0 )
  {
    dword_10695174 |= 1u;
    dword_10695158 = (int)"ConceptHistory_t";
    dword_10695160 = 0;
    dword_10695164 = 0;
    dword_10695168 = 0;
    dword_1069516C = 0;
    dword_10695170 = 0;
    dword_1069515C = 16;
    atexit(sub_1046F5F0);
  }
  dword_1060B400 = 0;
  dword_1060B3F8 = 1;
  dword_1060B3F4 = (int)&unk_1060B4DC;
  return &dword_1060B3F4;
}
