void sub_10242670()
{
  if ( !byte_1047CC08 )
  {
    byte_1047CC08 = 1;
    if ( (dword_1047CC04 & 1) == 0 )
    {
      dword_1047CC04 |= 1u;
      sub_10242180(dword_1047CBB0);
      atexit(sub_102CE610);
    }
    sub_102423B0((unsigned int *)dword_1047CBB0, "Panel")[7] = (unsigned int)sub_100B8F80;
  }
}
