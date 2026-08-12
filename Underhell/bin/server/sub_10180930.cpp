int *sub_10180930()
{
  if ( (dword_106B65C8 & 1) == 0 )
  {
    dword_106B65C8 |= 1u;
    dword_106B65AC = (int)"CLogicCollisionPair";
    dword_106B65B4 = 0;
    dword_106B65B8 = 0;
    dword_106B65BC = 0;
    dword_106B65C0 = 0;
    dword_106B65C4 = 0;
    dword_106B65B0 = 19;
    atexit(sub_10472000);
  }
  dword_1062CE78 = (int)&dword_1060F348;
  dword_1062CE70 = 6;
  dword_1062CE6C = (int)&unk_1062F644;
  return &dword_1062CE6C;
}
