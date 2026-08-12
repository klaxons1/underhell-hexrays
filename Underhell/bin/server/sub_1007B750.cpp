int *sub_1007B750()
{
  if ( (dword_1069340C & 1) == 0 )
  {
    dword_1069340C |= 1u;
    dword_106933F0 = (int)"CAI_MoveProbe";
    dword_106933F8 = 0;
    dword_106933FC = 0;
    dword_10693400 = 0;
    dword_10693404 = 0;
    dword_10693408 = 0;
    dword_106933F4 = 13;
    atexit(sub_1046F2C0);
  }
  dword_1060858C = 0;
  dword_10608584 = 2;
  dword_10608580 = (int)&unk_1060864C;
  return &dword_10608580;
}
