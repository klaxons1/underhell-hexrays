int *sub_10072FF0()
{
  if ( (dword_10693078 & 1) == 0 )
  {
    dword_10693078 |= 1u;
    dword_1069305C = (int)"CAI_Hint";
    dword_10693064 = 0;
    dword_10693068 = 0;
    dword_1069306C = 0;
    dword_10693070 = 0;
    dword_10693074 = 0;
    dword_10693060 = 8;
    atexit(sub_1046F1B0);
  }
  dword_10607324 = (int)&dword_1060F348;
  if ( (dword_10693078 & 2) == 0 )
  {
    dword_10693078 |= 2u;
    dword_106075BC = (int)sub_100390B0((char **)&dword_1069305C, "EnableThink");
    word_106075C8 = 1;
    dword_106075D8 = 0;
    dword_106075DC = 0;
    dword_106075E0 = 0;
    dword_106075E4 = 0;
    dword_106075E8 = 0;
    word_106075CA = 32;
    word_106075FE = 8;
    word_106075FC = 1;
    dword_1060760C = 0;
    dword_10607610 = 0;
    dword_10607614 = 0;
    dword_10607618 = 0;
    dword_1060761C = 0;
    word_10607630 = 1;
    dword_10607640 = 0;
    dword_10607644 = 0;
    dword_10607648 = 0;
    dword_1060764C = 0;
    dword_10607650 = 0;
    word_10607632 = 8;
    word_10607664 = 1;
    word_10607666 = 22;
    dword_106075C0 = 0;
    dword_106075C4 = 0;
    dword_106075CC = 0;
    dword_106075D0 = 0;
    dword_106075D4 = (int)sub_100700C0;
    dword_106075EC = 0;
    dword_106075F0 = (int)"InputEnableHint";
    dword_106075F4 = 0;
    dword_106075F8 = 0;
    dword_10607600 = (int)"EnableHint";
    dword_10607604 = 0;
    dword_10607608 = (int)sub_10070040;
    dword_10607620 = 0;
    dword_10607624 = (int)"InputDisableHint";
    dword_10607628 = 0;
    dword_1060762C = 0;
    dword_10607634 = (int)"DisableHint";
    dword_10607638 = 0;
    dword_1060763C = (int)sub_10070050;
    dword_10607654 = 11;
    dword_10607658 = (int)"m_OnNPCStartedUsing";
    dword_1060765C = 868;
    dword_10607660 = 0;
    dword_10607668 = (int)"OnNPCStartedUsing";
    dword_1060766C = (int)off_10614A2C;
    dword_10607670 = 0;
    dword_10607674 = 0;
    dword_10607678 = 0;
    dword_1060767C = 0;
    dword_10607680 = 0;
    dword_10607684 = 0;
    dword_10607688 = 11;
    dword_1060768C = (int)"m_OnNPCStoppedUsing";
    dword_10607690 = 892;
    dword_10607694 = 0;
    dword_10607698 = 1441793;
    dword_1060769C = (int)"OnNPCStoppedUsing";
    dword_106076A0 = (int)off_10614A2C;
    dword_106076A4 = 0;
    dword_106076A8 = 0;
    dword_106076AC = 0;
    dword_106076B0 = 0;
    dword_106076B4 = 0;
    dword_106076B8 = 0;
  }
  dword_1060731C = 10;
  dword_10607318 = (int)asc_106074B4;
  return &dword_10607318;
}
