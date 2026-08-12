int *sub_1002F070()
{
  if ( (dword_10404570 & 1) == 0 )
  {
    dword_10404570 |= 1u;
    dword_10404554 = (int)"C_ClientRagdoll";
    dword_1040455C = 0;
    dword_10404560 = 0;
    dword_10404564 = 0;
    dword_10404568 = 0;
    dword_1040456C = 0;
    dword_10404558 = 15;
    atexit(sub_102C83B0);
  }
  dword_103D7BB4 = (int)&dword_103D8A64;
  dword_103D7BAC = 20;
  dword_103D7BA8 = (int)&unk_103D8324;
  return &dword_103D7BA8;
}
