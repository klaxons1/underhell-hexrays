int *sub_10280070()
{
  if ( (dword_106D1CE8 & 1) == 0 )
  {
    dword_106D1CE8 |= 1u;
    dword_106D1CCC = (int)"CWeaponSMGMP7";
    dword_106D1CD4 = 0;
    dword_106D1CD8 = 0;
    dword_106D1CDC = 0;
    dword_106D1CE0 = 0;
    dword_106D1CE4 = 0;
    dword_106D1CD0 = 13;
    atexit(sub_10475410);
  }
  dword_10659610 = (int)&dword_10660834;
  dword_10659608 = 2;
  dword_10659604 = (int)&unk_10659894;
  return &dword_10659604;
}
