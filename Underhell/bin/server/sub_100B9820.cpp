int *sub_100B9820()
{
  if ( (dword_10695430 & 1) == 0 )
  {
    dword_10695430 |= 1u;
    dword_10695414 = (int)"CAI_AccelDecay";
    dword_1069541C = 0;
    dword_10695420 = 0;
    dword_10695424 = 0;
    dword_10695428 = 0;
    dword_1069542C = 0;
    dword_10695418 = 14;
    atexit(sub_1046F6D0);
  }
  dword_1060C5D8 = 0;
  dword_1060C5D0 = 6;
  dword_1060C5CC = (int)&unk_1060C9AC;
  return &dword_1060C5CC;
}
