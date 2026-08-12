int *sub_103F9760()
{
  if ( (dword_106EFCA0 & 1) == 0 )
  {
    dword_106EFCA0 |= 1u;
    dword_106EFC84 = (int)"CWeaponFrag";
    dword_106EFC8C = 0;
    dword_106EFC90 = 0;
    dword_106EFC94 = 0;
    dword_106EFC98 = 0;
    dword_106EFC9C = 0;
    dword_106EFC88 = 11;
    atexit(sub_104797C0);
  }
  dword_106854C0 = (int)&dword_106609CC;
  dword_106854B8 = 3;
  dword_106854B4 = (int)&unk_10685564;
  return &dword_106854B4;
}
