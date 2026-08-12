int *sub_101FEB70()
{
  if ( (dword_106C154C & 1) == 0 )
  {
    dword_106C154C |= 1u;
    dword_106C1530 = (int)"CPointPlayerMoveConstraint";
    dword_106C1538 = 0;
    dword_106C153C = 0;
    dword_106C1540 = 0;
    dword_106C1544 = 0;
    dword_106C1548 = 0;
    dword_106C1534 = 26;
    atexit(sub_104737A0);
  }
  dword_10640474 = (int)&dword_1060F348;
  if ( (dword_106C154C & 2) == 0 )
  {
    dword_106C154C |= 2u;
    if ( (dword_106950B0 & 1) == 0 )
    {
      dword_106950B0 |= 1u;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_106405D8 = (int)&dword_106950AC;
    dword_106405DC = 0;
    dword_106405E0 = 0;
    dword_106405E4 = 0;
    dword_106405E8 = 0;
    dword_106405EC = 0;
    dword_106405F0 = 0;
    dword_106405F4 = 0;
    dword_106405F8 = (int)sub_100390B0((char **)&dword_106C1530, "ConstraintThink");
    word_10640604 = 1;
    word_10640606 = 32;
    dword_10640614 = 0;
    dword_10640618 = 0;
    dword_1064061C = 0;
    dword_10640620 = 0;
    dword_10640624 = 0;
    word_10640638 = 1;
    word_1064063A = 8;
    word_1064066C = 1;
    dword_106405FC = 0;
    dword_10640600 = 0;
    dword_10640608 = 0;
    dword_1064060C = 0;
    dword_10640610 = (int)sub_101FE690;
    dword_10640628 = 0;
    dword_1064062C = (int)"InputTurnOn";
    dword_10640630 = 0;
    dword_10640634 = 0;
    dword_1064063C = (int)"TurnOn";
    dword_10640640 = 0;
    dword_10640644 = (int)sub_101FE8C0;
    dword_10640648 = 0;
    dword_1064064C = 0;
    dword_10640650 = 0;
    dword_10640654 = 0;
    dword_10640658 = 0;
    dword_1064065C = 0;
    dword_10640660 = (int)"InputTurnOff";
    dword_10640664 = 0;
    dword_10640668 = 0;
    word_1064066E = 8;
    dword_10640670 = (int)"TurnOff";
    dword_10640674 = 0;
    dword_10640678 = (int)sub_101FE7F0;
    dword_1064067C = 0;
    dword_10640680 = 0;
    dword_10640684 = 0;
    dword_10640688 = 0;
    dword_1064068C = 0;
    dword_10640690 = 11;
    dword_10640694 = (int)"m_OnConstraintBroken";
    dword_10640698 = 836;
    dword_1064069C = 0;
    dword_106406A0 = 1441793;
    dword_106406A4 = (int)"OnConstraintBroken";
    dword_106406A8 = (int)off_10614A2C;
    dword_106406AC = 0;
    dword_106406B0 = 0;
    dword_106406B4 = 0;
    dword_106406B8 = 0;
    dword_106406BC = 0;
    dword_106406C0 = 0;
  }
  dword_1064046C = 8;
  dword_10640468 = (int)&unk_10640524;
  return &dword_10640468;
}
