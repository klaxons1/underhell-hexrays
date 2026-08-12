int *sub_103CC430()
{
  if ( (dword_106EC774 & 1) == 0 )
  {
    dword_106EC774 |= 1u;
    dword_106EC758 = (int)"CFleshEffectTarget";
    dword_106EC760 = 0;
    dword_106EC764 = 0;
    dword_106EC768 = 0;
    dword_106EC76C = 0;
    dword_106EC770 = 0;
    dword_106EC75C = 18;
    atexit(sub_10478F00);
  }
  dword_1067CEA8 = (int)&dword_1060F348;
  dword_1067CEA0 = 3;
  dword_1067CE9C = (int)&unk_1067D9AC;
  return &dword_1067CE9C;
}
