void sub_102426C0()
{
  if ( !byte_1047CC09 )
  {
    byte_1047CC09 = 1;
    if ( (dword_1047CBA4 & 1) == 0 )
    {
      dword_1047CBA4 |= 1u;
      sub_102421D0(dword_1047CB50);
      atexit(sub_102CE5D0);
    }
    sub_10242450((unsigned int *)dword_1047CB50, "Panel")[17] = (unsigned int)sub_100B8F80;
  }
}
