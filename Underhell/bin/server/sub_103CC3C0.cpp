int *sub_103CC3C0()
{
  if ( (dword_106EC754 & 1) == 0 )
  {
    dword_106EC754 |= 1u;
    dword_106EC738 = (int)"CVortigauntEffectDispel";
    dword_106EC740 = 0;
    dword_106EC744 = 0;
    dword_106EC748 = 0;
    dword_106EC74C = 0;
    dword_106EC750 = 0;
    dword_106EC73C = 23;
    atexit(sub_10478EF0);
  }
  dword_1067CE8C = (int)&dword_1060F348;
  dword_1067CE84 = 1;
  dword_1067CE80 = (int)&unk_1067D944;
  return &dword_1067CE80;
}
