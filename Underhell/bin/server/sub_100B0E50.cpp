int *sub_100B0E50()
{
  if ( (dword_10695228 & 1) == 0 )
  {
    dword_10695228 |= 1u;
    dword_1069520C = (int)"CAI_SpeechFilter";
    dword_10695214 = 0;
    dword_10695218 = 0;
    dword_1069521C = 0;
    dword_10695220 = 0;
    dword_10695224 = 0;
    dword_10695210 = 16;
    atexit(sub_1046F610);
  }
  dword_1060B6A4 = (int)&dword_1060F348;
  dword_1060B69C = 7;
  dword_1060B698 = (int)&unk_1060B744;
  return &dword_1060B698;
}
