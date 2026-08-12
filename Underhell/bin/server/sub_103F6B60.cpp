int *sub_103F6B60()
{
  if ( (dword_106EF5C4 & 1) == 0 )
  {
    dword_106EF5C4 |= 1u;
    dword_106EF5A8 = (int)"CWeaponCitizenPackage";
    dword_106EF5B0 = 0;
    dword_106EF5B4 = 0;
    dword_106EF5B8 = 0;
    dword_106EF5BC = 0;
    dword_106EF5C0 = 0;
    dword_106EF5AC = 21;
    atexit(sub_10479650);
  }
  dword_10685138 = (int)&dword_106609CC;
  dword_10685130 = 1;
  dword_1068512C = (int)&unk_106EF574;
  return &dword_1068512C;
}
