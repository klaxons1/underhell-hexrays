int *sub_1007CDD0()
{
  if ( (dword_1069342C & 1) == 0 )
  {
    dword_1069342C |= 1u;
    dword_10693410 = (int)"CAI_MoveAndShootOverlay";
    dword_10693418 = 0;
    dword_1069341C = 0;
    dword_10693420 = 0;
    dword_10693424 = 0;
    dword_10693428 = 0;
    dword_10693414 = 23;
    atexit(sub_1046F2D0);
  }
  dword_106086C0 = 0;
  dword_106086B8 = 4;
  dword_106086B4 = (int)&unk_1060872C;
  return &dword_106086B4;
}
