int *sub_10119F30()
{
  if ( (dword_1069C440 & 1) == 0 )
  {
    dword_1069C440 |= 1u;
    dword_1069C424 = (int)"modifiedconvars_t";
    dword_1069C42C = 0;
    dword_1069C430 = 0;
    dword_1069C434 = 0;
    dword_1069C438 = 0;
    dword_1069C43C = 0;
    dword_1069C428 = 17;
    atexit(sub_10470750);
  }
  dword_10615848 = 0;
  dword_10615840 = 3;
  dword_1061583C = (int)&unk_10615CBC;
  return &dword_1061583C;
}
