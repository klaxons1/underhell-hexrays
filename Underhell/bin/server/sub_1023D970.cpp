int *sub_1023D970()
{
  if ( (dword_106C5030 & 1) == 0 )
  {
    dword_106C5030 |= 1u;
    dword_106C5014 = (int)"CAISound";
    dword_106C501C = 0;
    dword_106C5020 = 0;
    dword_106C5024 = 0;
    dword_106C5028 = 0;
    dword_106C502C = 0;
    dword_106C5018 = 8;
    atexit(sub_10474040);
  }
  dword_1064C468 = (int)&dword_1060F348;
  dword_1064C460 = 7;
  dword_1064C45C = (int)&unk_1064C8B4;
  return &dword_1064C45C;
}
