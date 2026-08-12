int *sub_102BEF30()
{
  if ( (dword_106DDDBC & 1) == 0 )
  {
    dword_106DDDBC |= 1u;
    dword_106DDDA0 = (int)"CEnvHeadcrabCanisterShared";
    dword_106DDDA8 = 0;
    dword_106DDDAC = 0;
    dword_106DDDB0 = 0;
    dword_106DDDB4 = 0;
    dword_106DDDB8 = 0;
    dword_106DDDA4 = 26;
    atexit(sub_10476A80);
  }
  dword_10661C94 = 0;
  dword_10661C8C = 17;
  dword_10661C88 = (int)&unk_10661CDC;
  return &dword_10661C88;
}
