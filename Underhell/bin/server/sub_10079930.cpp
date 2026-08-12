int *sub_10079930()
{
  if ( (dword_10693248 & 1) == 0 )
  {
    dword_10693248 |= 1u;
    dword_1069322C = (int)"CAI_Motor";
    dword_10693234 = 0;
    dword_10693238 = 0;
    dword_1069323C = 0;
    dword_10693240 = 0;
    dword_10693244 = 0;
    dword_10693230 = 9;
    atexit(sub_1046F260);
  }
  dword_1060836C = 0;
  if ( (dword_10693248 & 2) == 0 )
  {
    dword_10693248 |= 2u;
    if ( (dword_10690180 & 1) == 0 )
    {
      dword_10690180 |= 1u;
      dword_1069017C = (int)&CUtlVectorDataOps<CAI_InterestTarget,10>::`vftable';
    }
    dword_10608534 = 0;
    flt_10608578 = 0.0;
    dword_10608538 = 0;
    dword_1060853C = 0;
    dword_10608540 = 0;
    dword_10608544 = 0;
    dword_1060852C = (int)&dword_1069017C;
    dword_10608530 = 0;
    dword_10608548 = 6;
    dword_1060854C = (int)"m_bYawLocked";
    dword_10608550 = 92;
    dword_10608554 = 0;
    word_10608558 = 1;
    word_1060855A = 2;
    dword_1060855C = 0;
    dword_10608560 = 0;
    dword_10608564 = 0;
    dword_10608568 = 0;
    dword_1060856C = 1;
    dword_10608570 = 0;
    dword_10608574 = 0;
  }
  dword_10608364 = 8;
  dword_10608360 = (int)&unk_106083DC;
  return &dword_10608360;
}
