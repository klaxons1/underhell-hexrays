int *sub_101202A0()
{
  if ( (dword_104377A4 & 1) == 0 )
  {
    dword_104377A4 |= 1u;
    dword_10437788 = (int)"CSimTimer";
    dword_10437790 = 0;
    dword_10437794 = 0;
    dword_10437798 = 0;
    dword_1043779C = 0;
    dword_104377A0 = 0;
    dword_1043778C = 9;
    atexit(sub_102CB780);
  }
  dword_103E5384 = (int)&dword_103E5360;
  dword_103E537C = 1;
  dword_103E5378 = (int)&unk_103E548C;
  return &dword_103E5378;
}
