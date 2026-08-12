int *sub_103F5B00()
{
  if ( (dword_106EF220 & 1) == 0 )
  {
    dword_106EF220 |= 1u;
    dword_106EF204 = (int)"CWeaponAR2";
    dword_106EF20C = 0;
    dword_106EF210 = 0;
    dword_106EF214 = 0;
    dword_106EF218 = 0;
    dword_106EF21C = 0;
    dword_106EF208 = 10;
    atexit(sub_104795A0);
  }
  dword_10684C94 = (int)&dword_10660818;
  dword_10684C8C = 2;
  dword_10684C88 = (int)&unk_10684F0C;
  return &dword_10684C88;
}
