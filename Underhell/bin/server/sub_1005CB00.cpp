int *sub_1005CB00()
{
  if ( (dword_10692350 & 1) == 0 )
  {
    dword_10692350 |= 1u;
    dword_10692334 = (int)"CAI_RappelBehavior";
    dword_1069233C = 0;
    dword_10692340 = 0;
    dword_10692344 = 0;
    dword_10692348 = 0;
    dword_1069234C = 0;
    dword_10692338 = 18;
    atexit(sub_1046ECE0);
  }
  dword_10605478 = (int)&dword_10601D54;
  dword_10605470 = 4;
  dword_1060546C = (int)&unk_10605534;
  return &dword_1060546C;
}
