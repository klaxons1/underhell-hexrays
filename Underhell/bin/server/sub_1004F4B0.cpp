int *sub_1004F4B0()
{
  if ( (dword_10691E7C & 1) == 0 )
  {
    dword_10691E7C |= 1u;
    dword_10691E60 = (int)"CAssaultPoint";
    dword_10691E68 = 0;
    dword_10691E6C = 0;
    dword_10691E70 = 0;
    dword_10691E74 = 0;
    dword_10691E78 = 0;
    dword_10691E64 = 13;
    atexit(sub_1046EBC0);
  }
  dword_10601D94 = (int)&dword_1060F348;
  if ( (dword_10691E7C & 2) == 0 )
  {
    dword_10691E7C |= 2u;
    dword_106025EC = (int)off_10614A2C;
    dword_106025F0 = 0;
    dword_106025F4 = 0;
    dword_106025F8 = 0;
    dword_106025FC = 0;
    dword_10602600 = 0;
    dword_10602604 = 0;
    dword_10602608 = 11;
    dword_1060260C = (int)"m_OnAssaultClear";
    dword_10602610 = 808;
    dword_10602614 = 0;
    dword_10602618 = 1441793;
    dword_1060261C = (int)"OnAssaultClear";
    dword_10602620 = (int)off_10614A2C;
    dword_10602624 = 0;
    dword_10602628 = 0;
    dword_1060262C = 0;
    dword_10602630 = 0;
    dword_10602634 = 0;
    dword_10602638 = 0;
  }
  dword_10601D8C = 18;
  dword_10601D88 = (int)&unk_10602294;
  return &dword_10601D88;
}
