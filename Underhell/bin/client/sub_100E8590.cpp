int *sub_100E8590()
{
  if ( (dword_10435710 & 1) == 0 )
  {
    dword_10435710 |= 1u;
    sub_100E8090(dword_104356B8);
    atexit(sub_102CAF10);
  }
  return dword_104356B8;
}
