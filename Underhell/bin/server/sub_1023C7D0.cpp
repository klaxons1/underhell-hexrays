char sub_1023C7D0()
{
  int v0; // eax
  char *v1; // eax

  v0 = sub_10280AC0();
  v1 = sub_100E3960((int)"soundent", &flt_106F1CA8, &flt_106F1CB4, v0);
  dword_106C4FC4 = (int)v1;
  if ( v1 )
  {
    *((_DWORD *)v1 + 63) |= 0x10u;
    return 1;
  }
  else
  {
    Warning("**COULD NOT CREATE SOUNDENT**\n");
    return 0;
  }
}
