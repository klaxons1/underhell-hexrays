int *sub_1023D870()
{
  if ( (dword_106C4FF0 & 1) == 0 )
  {
    dword_106C4FF0 |= 1u;
    dword_106C4FD4 = (int)"CSound";
    dword_106C4FDC = 0;
    dword_106C4FE0 = 0;
    dword_106C4FE4 = 0;
    dword_106C4FE8 = 0;
    dword_106C4FEC = 0;
    dword_106C4FD8 = 6;
    atexit(sub_10474020);
  }
  dword_1064C438 = 0;
  dword_1064C430 = 11;
  dword_1064C42C = (int)asc_1064C53C;
  return &dword_1064C42C;
}
