int *sub_103F4F60()
{
  if ( (dword_106EF118 & 1) == 0 )
  {
    dword_106EF118 |= 1u;
    dword_106EF0FC = (int)"CWeaponAnnabelle";
    dword_106EF104 = 0;
    dword_106EF108 = 0;
    dword_106EF10C = 0;
    dword_106EF110 = 0;
    dword_106EF114 = 0;
    dword_106EF100 = 16;
    atexit(sub_10479530);
  }
  dword_10684AA0 = (int)&dword_106609CC;
  dword_10684A98 = 3;
  dword_10684A94 = (int)&unk_10684BEC;
  return &dword_10684A94;
}
