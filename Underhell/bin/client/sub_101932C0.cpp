int *sub_101932C0()
{
  if ( (dword_104475D8 & 1) == 0 )
  {
    dword_104475D8 |= 1u;
    dword_104475BC = (int)"C_NPC_AntlionGuard";
    dword_104475C4 = 0;
    dword_104475C8 = 0;
    dword_104475CC = 0;
    dword_104475D0 = 0;
    dword_104475D4 = 0;
    dword_104475C0 = 18;
    atexit(sub_102CD790);
  }
  dword_103EAEB8 = (int)&dword_103D8A64;
  dword_103EAEB0 = 1;
  dword_103EAEAC = (int)&unk_10447588;
  return &dword_103EAEAC;
}
