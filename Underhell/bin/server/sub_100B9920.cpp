int *sub_100B9920()
{
  if ( (dword_10695470 & 1) == 0 )
  {
    dword_10695470 |= 1u;
    dword_10695454 = (int)"CAI_FreePass";
    dword_1069545C = 0;
    dword_10695460 = 0;
    dword_10695464 = 0;
    dword_10695468 = 0;
    dword_1069546C = 0;
    dword_10695458 = 12;
    atexit(sub_1046F6F0);
  }
  dword_1060C608 = 0;
  dword_1060C600 = 4;
  dword_1060C5FC = (int)&unk_1060CD24;
  return &dword_1060C5FC;
}
