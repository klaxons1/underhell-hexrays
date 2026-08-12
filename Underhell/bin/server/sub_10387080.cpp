int *sub_10387080()
{
  if ( (dword_106E9D04 & 1) == 0 )
  {
    dword_106E9D04 |= 1u;
    dword_106E9CE8 = (int)"CNPC_Manhack";
    dword_106E9CF0 = 0;
    dword_106E9CF4 = 0;
    dword_106E9CF8 = 0;
    dword_106E9CFC = 0;
    dword_106E9D00 = 0;
    dword_106E9CEC = 12;
    atexit(sub_10478770);
  }
  dword_10675C2C = (int)&dword_10601B7C;
  if ( (dword_106E9D04 & 2) == 0 )
  {
    dword_106E9D04 |= 2u;
    dword_106765A8 = (int)sub_100390B0((char **)&dword_106E9CE8, "CrashTouch");
    word_106765B4 = 1;
    dword_106765C4 = 0;
    dword_106765C8 = 0;
    dword_106765CC = 0;
    dword_106765D0 = 0;
    dword_106765D4 = 0;
    word_106765E8 = 1;
    word_106765B6 = 32;
    dword_106765F4 = 0;
    dword_106765F8 = 0;
    dword_106765FC = 0;
    dword_10676600 = 0;
    dword_10676604 = 0;
    dword_10676608 = 0;
    dword_106765D8 = 11;
    word_106765EA = 22;
    dword_1067660C = 11;
    word_1067661E = 22;
    dword_106765AC = 0;
    dword_106765B0 = 0;
    dword_106765B8 = 0;
    dword_106765BC = 0;
    dword_106765C0 = (int)sub_10382160;
    dword_106765DC = (int)"m_OnAlyxStartedInteraction";
    dword_106765E0 = 3684;
    dword_106765E4 = 0;
    dword_106765EC = (int)"OnAlyxStartedInteraction";
    dword_106765F0 = (int)off_10614A2C;
    dword_10676610 = (int)"m_OnAlyxFinishedInteraction";
    dword_10676614 = 3708;
    dword_10676618 = 0;
    word_1067661C = 1;
    dword_10676620 = (int)"OnAlyxFinishedInteraction";
    dword_10676624 = (int)off_10614A2C;
    dword_10676628 = 0;
    dword_1067662C = 0;
    dword_10676630 = 0;
    dword_10676634 = 0;
    dword_10676638 = 0;
    dword_1067663C = 0;
    dword_10676640 = 0;
    dword_10676644 = (int)"InputPowerdown";
    dword_10676648 = 0;
    dword_1067664C = 0;
    dword_10676650 = 524289;
    dword_10676654 = (int)"InteractivePowerDown";
    dword_10676658 = 0;
    dword_1067665C = (int)sub_10382670;
    dword_10676660 = 0;
    dword_10676664 = 0;
    dword_10676668 = 0;
    dword_1067666C = 0;
    dword_10676670 = 0;
  }
  dword_10675C24 = 46;
  dword_10675C20 = (int)&unk_10675D1C;
  return &dword_10675C20;
}
