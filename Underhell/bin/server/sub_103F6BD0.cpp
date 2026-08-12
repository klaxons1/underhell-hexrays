int *sub_103F6BD0()
{
  if ( (dword_106EF618 & 1) == 0 )
  {
    dword_106EF618 |= 1u;
    dword_106EF5FC = (int)"CWeaponCitizenSuitcase";
    dword_106EF604 = 0;
    dword_106EF608 = 0;
    dword_106EF60C = 0;
    dword_106EF610 = 0;
    dword_106EF614 = 0;
    dword_106EF600 = 22;
    atexit(sub_10479660);
  }
  dword_1068516C = (int)&dword_1068512C;
  dword_10685164 = 1;
  dword_10685160 = (int)&unk_106EF5C8;
  return &dword_10685160;
}
