int *sub_101B4A00()
{
  if ( (dword_106B9D80 & 1) == 0 )
  {
    dword_106B9D80 |= 1u;
    dword_106B9D64 = (int)"CPhysSlideConstraint";
    dword_106B9D6C = 0;
    dword_106B9D70 = 0;
    dword_106B9D74 = 0;
    dword_106B9D78 = 0;
    dword_106B9D7C = 0;
    dword_106B9D68 = 20;
    atexit(sub_10472D10);
  }
  dword_106363E4 = (int)&dword_106363A8;
  if ( (dword_106B9D80 & 2) == 0 )
  {
    dword_106B9D80 |= 2u;
    dword_106372B0 = (int)sub_100390B0((char **)&dword_106B9D64, "SoundThink");
    dword_106372B4 = 0;
    dword_106372B8 = 0;
    dword_106372BC = 2097153;
    dword_106372C0 = 0;
    dword_106372C4 = 0;
    dword_106372C8 = (int)sub_101B2810;
    dword_106372CC = 0;
    dword_106372D0 = 0;
    dword_106372D4 = 0;
    dword_106372D8 = 0;
    dword_106372DC = 0;
  }
  dword_106363DC = 15;
  dword_106363D8 = (int)&unk_10636FD4;
  return &dword_106363D8;
}
