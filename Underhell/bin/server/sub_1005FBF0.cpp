int *sub_1005FBF0()
{
  if ( (dword_10692434 & 1) == 0 )
  {
    dword_10692434 |= 1u;
    dword_10692418 = (int)"CAI_StandoffBehavior";
    dword_10692420 = 0;
    dword_10692424 = 0;
    dword_10692428 = 0;
    dword_1069242C = 0;
    dword_10692430 = 0;
    dword_1069241C = 20;
    atexit(sub_1046ED30);
  }
  dword_10605760 = (int)&dword_10601D54;
  dword_10605758 = 18;
  dword_10605754 = (int)&unk_10605D64;
  return &dword_10605754;
}
