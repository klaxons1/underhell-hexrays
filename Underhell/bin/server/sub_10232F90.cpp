int *sub_10232F90()
{
  if ( (dword_106C469C & 1) == 0 )
  {
    dword_106C469C |= 1u;
    dword_106C4680 = (int)"CAI_ScriptedSentence";
    dword_106C4688 = 0;
    dword_106C468C = 0;
    dword_106C4690 = 0;
    dword_106C4694 = 0;
    dword_106C4698 = 0;
    dword_106C4684 = 20;
    atexit(sub_10473E10);
  }
  dword_10648E8C = (int)&dword_1060F348;
  if ( (dword_106C469C & 2) == 0 )
  {
    dword_106C469C |= 2u;
    dword_1064951C = (int)sub_100390B0((char **)&dword_106C4680, "FindThink");
    word_10649528 = 1;
    word_1064952A = 32;
    dword_10649520 = 0;
    dword_10649524 = 0;
    dword_1064952C = 0;
    dword_10649530 = 0;
    dword_10649534 = (int)sub_10231550;
    dword_10649538 = 0;
    dword_1064953C = 0;
    dword_10649540 = 0;
    dword_10649544 = 0;
    dword_10649548 = 0;
    dword_1064954C = 0;
    dword_10649550 = (int)sub_100390B0((char **)&dword_106C4680, "DelayThink");
    word_1064955E = 32;
    word_1064955C = 1;
    dword_1064956C = 0;
    dword_10649570 = 0;
    dword_10649574 = 0;
    dword_10649578 = 0;
    dword_1064957C = 0;
    word_10649590 = 1;
    dword_106495A0 = 0;
    dword_106495A4 = 0;
    dword_106495A8 = 0;
    dword_106495AC = 0;
    dword_106495B0 = 0;
    word_10649592 = 8;
    word_106495C4 = 1;
    word_106495C6 = 22;
    dword_10649554 = 0;
    dword_10649558 = 0;
    dword_10649560 = 0;
    dword_10649564 = 0;
    dword_10649568 = (int)&loc_10231630;
    dword_10649580 = 0;
    dword_10649584 = (int)"InputBeginSentence";
    dword_10649588 = 0;
    dword_1064958C = 0;
    dword_10649594 = (int)"BeginSentence";
    dword_10649598 = 0;
    dword_1064959C = (int)sub_10231970;
    dword_106495B4 = 11;
    dword_106495B8 = (int)"m_OnBeginSentence";
    dword_106495BC = 844;
    dword_106495C0 = 0;
    dword_106495C8 = (int)"OnBeginSentence";
    dword_106495CC = (int)off_10614A2C;
    dword_106495D0 = 0;
    dword_106495D4 = 0;
    dword_106495D8 = 0;
    dword_106495DC = 0;
    dword_106495E0 = 0;
    dword_106495E4 = 0;
    dword_106495E8 = 11;
    dword_106495EC = (int)"m_OnEndSentence";
    dword_106495F0 = 868;
    dword_106495F4 = 0;
    dword_106495F8 = 1441793;
    dword_106495FC = (int)"OnEndSentence";
    dword_10649600 = (int)off_10614A2C;
    dword_10649604 = 0;
    dword_10649608 = 0;
    dword_1064960C = 0;
    dword_10649610 = 0;
    dword_10649614 = 0;
    dword_10649618 = 0;
  }
  dword_10648E84 = 16;
  dword_10648E80 = (int)&unk_106492DC;
  return &dword_10648E80;
}
