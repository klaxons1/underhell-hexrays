int *sub_102D4CF0()
{
  if ( (dword_106DE704 & 1) == 0 )
  {
    dword_106DE704 |= 1u;
    dword_106DE6E8 = (int)"CBugBaitSensor";
    dword_106DE6F0 = 0;
    dword_106DE6F4 = 0;
    dword_106DE6F8 = 0;
    dword_106DE6FC = 0;
    dword_106DE700 = 0;
    dword_106DE6EC = 14;
    atexit(sub_10476D30);
  }
  dword_10665524 = (int)&dword_1060F348;
  if ( (dword_106DE704 & 2) == 0 )
  {
    dword_106DE704 |= 2u;
    dword_10665780 = (int)off_10614A2C;
    dword_10665784 = 0;
    dword_10665788 = 0;
    dword_1066578C = 0;
    dword_10665790 = 0;
    dword_10665794 = 0;
    dword_10665798 = 0;
  }
  dword_1066551C = 6;
  dword_10665518 = (int)&unk_10665664;
  return &dword_10665518;
}
