int *sub_102B6620()
{
  if ( (dword_106DCAA0 & 1) == 0 )
  {
    dword_106DCAA0 |= 1u;
    dword_106DCA84 = (int)"CBaseSpriteProjectile";
    dword_106DCA8C = 0;
    dword_106DCA90 = 0;
    dword_106DCA94 = 0;
    dword_106DCA98 = 0;
    dword_106DCA9C = 0;
    dword_106DCA88 = 21;
    atexit(sub_10476940);
  }
  dword_10660D70 = (int)&dword_1064DB24;
  dword_10660D68 = 3;
  dword_10660D64 = (int)&unk_10660E14;
  return &dword_10660D64;
}
