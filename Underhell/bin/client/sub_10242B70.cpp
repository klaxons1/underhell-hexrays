void sub_10242B70()
{
  unsigned int *v0; // esi

  if ( !byte_1047CC25 )
  {
    byte_1047CC25 = 1;
    if ( (dword_1047CC04 & 1) == 0 )
    {
      dword_1047CC04 |= 1u;
      sub_10242180(dword_1047CBB0);
      atexit(sub_102CE610);
    }
    v0 = sub_102423B0((unsigned int *)dword_1047CBB0, "CDragDropHelperPanel");
    v0[7] = (unsigned int)sub_10235FD0;
    v0[6] = (unsigned int)sub_10242540("Panel");
  }
}
