int *sub_1008FCA0()
{
  if ( (dword_10693730 & 1) == 0 )
  {
    dword_10693730 |= 1u;
    dword_10693714 = (int)"CAI_Pathfinder";
    dword_1069371C = 0;
    dword_10693720 = 0;
    dword_10693724 = 0;
    dword_10693728 = 0;
    dword_1069372C = 0;
    dword_10693718 = 14;
    atexit(sub_1046F3D0);
  }
  dword_1060913C = 0;
  dword_10609134 = 1;
  dword_10609130 = (int)&unk_106091B4;
  return &dword_10609130;
}
