int *sub_100A2590()
{
  if ( (dword_1069414C & 1) == 0 )
  {
    dword_1069414C |= 1u;
    dword_10694130 = (int)"Response";
    dword_10694138 = 0;
    dword_1069413C = 0;
    dword_10694140 = 0;
    dword_10694144 = 0;
    dword_10694148 = 0;
    dword_10694134 = 8;
    atexit(sub_1046F4C0);
  }
  dword_1060A518 = 0;
  dword_1060A510 = 1;
  dword_1060A50C = (int)asc_1060A614;
  return &dword_1060A50C;
}
