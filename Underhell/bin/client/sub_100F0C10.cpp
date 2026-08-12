void sub_100F0C10()
{
  if ( (dword_10435CD4 & 1) == 0 )
  {
    dword_10435CD4 |= 1u;
    sub_100EFD80(dword_10435BC0);
    atexit(sub_102CB000);
  }
  sub_100EDA60((int)dword_10435BC0, 1);
}
