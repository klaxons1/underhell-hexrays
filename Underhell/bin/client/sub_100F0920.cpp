_DWORD *sub_100F0920()
{
  if ( (dword_10435CD4 & 1) == 0 )
  {
    dword_10435CD4 |= 1u;
    sub_100EFD80(dword_10435BC0);
    atexit(sub_102CB000);
  }
  return dword_10435BC0;
}
