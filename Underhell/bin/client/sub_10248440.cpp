void *sub_10248440()
{
  if ( (dword_1047CCB4 & 1) == 0 )
  {
    dword_1047CCB4 |= 1u;
    sub_1022FEB0((int)&unk_1047CC60, 0x1Cu, 32, 1, 0, 0);
    dword_1047CC94 = 0;
    dword_1047CC98 = 0;
    dword_1047CC9C = 0;
    dword_1047CCA0 = -1;
    dword_1047CCA4 = 0;
    dword_1047CCA8 = -1;
    dword_1047CCAC = -1;
    dword_1047CCB0 = 0;
    dword_1047CC90 = (int)sub_10002020;
    atexit(sub_102CE650);
  }
  return &unk_1047CC60;
}
