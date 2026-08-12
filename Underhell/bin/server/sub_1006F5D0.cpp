int *sub_1006F5D0()
{
  if ( (dword_10692FD8 & 1) == 0 )
  {
    dword_10692FD8 |= 1u;
    dword_10692FBC = (int)"CAI_GoalEntity";
    dword_10692FC4 = 0;
    dword_10692FC8 = 0;
    dword_10692FCC = 0;
    dword_10692FD0 = 0;
    dword_10692FD4 = 0;
    dword_10692FC0 = 14;
    atexit(sub_1046F170);
  }
  dword_10606FDC = (int)&dword_1060F348;
  if ( (dword_10692FD8 & 2) == 0 )
  {
    dword_10692FD8 |= 2u;
    if ( (dword_10692FB8 & 1) == 0 )
    {
      dword_10692FB8 |= 1u;
      dword_10692FB4 = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CAI_BaseNPC>,CUtlMemory<CHandle<CAI_BaseNPC>,int>>,13>::`vftable';
    }
    dword_106071C8 = 0;
    flt_1060720C = 0.0;
    dword_106071CC = 0;
    flt_10607240 = 0.0;
    dword_106071D0 = 0;
    dword_106071D4 = 0;
    dword_106071D8 = 0;
    word_106071EC = 1;
    word_106071EE = 2;
    word_10607222 = 2;
    dword_106071C0 = (int)&dword_10692FB4;
    dword_106071C4 = 0;
    dword_106071DC = 13;
    dword_106071E0 = (int)"m_hGoalEntity";
    dword_106071E4 = 844;
    dword_106071E8 = 0;
    dword_106071F0 = 0;
    dword_106071F4 = 0;
    dword_106071F8 = 0;
    dword_106071FC = 0;
    dword_10607200 = 4;
    dword_10607204 = 0;
    dword_10607208 = 0;
    dword_10607210 = 5;
    dword_10607214 = (int)"m_flags";
    dword_10607218 = 848;
    dword_1060721C = 0;
    word_10607220 = 1;
    dword_10607224 = 0;
    dword_10607228 = 0;
    dword_1060722C = 0;
    dword_10607230 = 0;
    dword_10607234 = 4;
    dword_10607238 = 0;
    dword_1060723C = 0;
    dword_10607244 = 0;
    dword_10607248 = (int)sub_100390B0((char **)&dword_10692FBC, "DelayedRefresh");
    word_10607254 = 1;
    dword_10607264 = 0;
    dword_10607268 = 0;
    dword_1060726C = 0;
    dword_10607270 = 0;
    dword_10607274 = 0;
    word_1060728A = 8;
    dword_1060724C = 0;
    dword_10607250 = 0;
    word_10607256 = 32;
    dword_10607258 = 0;
    dword_1060725C = 0;
    dword_10607260 = (int)sub_1006DC50;
    dword_10607278 = 0;
    dword_1060727C = (int)"InputActivate";
    dword_10607280 = 0;
    dword_10607284 = 0;
    word_10607288 = 1;
    dword_1060728C = (int)"Activate";
    dword_10607290 = 0;
    dword_10607294 = (int)sub_1029D7A0;
    dword_10607298 = 0;
    dword_1060729C = 0;
    dword_106072A0 = 0;
    dword_106072A4 = 0;
    dword_106072A8 = 0;
    dword_106072AC = 0;
    dword_106072B0 = (int)"InputUpdateActors";
    dword_106072B4 = 0;
    dword_106072B8 = 0;
    word_106072BC = 1;
    word_106072BE = 8;
    dword_106072C0 = (int)"UpdateActors";
    dword_106072C4 = 0;
    dword_106072C8 = (int)sub_10116720;
    dword_106072CC = 0;
    dword_106072D0 = 0;
    dword_106072D4 = 0;
    dword_106072D8 = 0;
    dword_106072DC = 0;
    dword_106072E0 = 0;
    dword_106072E4 = (int)"InputDeactivate";
    dword_106072E8 = 0;
    dword_106072EC = 0;
    dword_106072F0 = 524289;
    dword_106072F4 = (int)"Deactivate";
    dword_106072F8 = 0;
    dword_106072FC = (int)sub_10254D30;
    dword_10607300 = 0;
    dword_10607304 = 0;
    dword_10607308 = 0;
    dword_1060730C = 0;
    dword_10607310 = 0;
  }
  dword_10606FD4 = 12;
  dword_10606FD0 = (int)&unk_106070A4;
  return &dword_10606FD0;
}
