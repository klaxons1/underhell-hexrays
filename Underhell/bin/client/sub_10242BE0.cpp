void sub_10242BE0()
{
  unsigned int *v0; // esi

  if ( !byte_1047CC26 )
  {
    byte_1047CC26 = 1;
    if ( (dword_1047CBA4 & 1) == 0 )
    {
      dword_1047CBA4 |= 1u;
      sub_102421D0(dword_1047CB50);
      atexit(sub_102CE5D0);
    }
    v0 = sub_10242450((unsigned int *)dword_1047CB50, "CDragDropHelperPanel");
    v0[17] = (unsigned int)sub_10235FD0;
    v0[6] = (unsigned int)sub_10242580("Panel");
  }
}
