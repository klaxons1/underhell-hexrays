int *sub_10240C40()
{
  if ( (dword_106C51E8 & 1) == 0 )
  {
    dword_106C51E8 |= 1u;
    dword_106C51CC = (int)"CEnvSoundscape";
    dword_106C51D4 = 0;
    dword_106C51D8 = 0;
    dword_106C51DC = 0;
    dword_106C51E0 = 0;
    dword_106C51E4 = 0;
    dword_106C51D0 = 14;
    atexit(sub_10474110);
  }
  dword_1064D304 = (int)&dword_1060F348;
  if ( (dword_106C51E8 & 2) == 0 )
  {
    dword_106C51E8 |= 2u;
    if ( (dword_106C51A8 & 1) == 0 )
    {
      dword_106C51A8 |= 1u;
      dword_106C51A4 = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>,13>::`vftable';
    }
    dword_1064D840 = 0;
    flt_1064D884 = 0.0;
    dword_1064D844 = 0;
    flt_1064D8B8 = 0.0;
    dword_1064D848 = 0;
    dword_1064D84C = 0;
    dword_1064D850 = 0;
    word_1064D866 = 2;
    word_1064D864 = 1;
    word_1064D8CC = 1;
    word_1064D898 = 1;
    word_1064D89A = 6;
    dword_1064D8DC = 0;
    dword_1064D8E0 = 0;
    dword_1064D8E4 = 0;
    dword_1064D8E8 = 0;
    dword_1064D8EC = 0;
    word_1064D8CE = 8;
    word_1064D900 = 1;
    word_1064D902 = 8;
    dword_1064D838 = (int)&dword_106C51A4;
    dword_1064D83C = 0;
    dword_1064D854 = 16;
    dword_1064D858 = (int)"m_flNextUpdatePlayersInPVS";
    dword_1064D85C = 892;
    dword_1064D860 = 0;
    dword_1064D868 = 0;
    dword_1064D86C = 0;
    dword_1064D870 = 0;
    dword_1064D874 = 0;
    dword_1064D878 = 4;
    dword_1064D87C = 0;
    dword_1064D880 = 0;
    dword_1064D888 = 6;
    dword_1064D88C = (int)"m_bDisabled";
    dword_1064D890 = 896;
    dword_1064D894 = 0;
    dword_1064D89C = (int)"StartDisabled";
    dword_1064D8A0 = 0;
    dword_1064D8A4 = 0;
    dword_1064D8A8 = 0;
    dword_1064D8AC = 1;
    dword_1064D8B0 = 0;
    dword_1064D8B4 = 0;
    dword_1064D8BC = 0;
    dword_1064D8C0 = (int)"InputEnable";
    dword_1064D8C4 = 0;
    dword_1064D8C8 = 0;
    dword_1064D8D0 = (int)"Enable";
    dword_1064D8D4 = 0;
    dword_1064D8D8 = (int)sub_1023F9F0;
    dword_1064D8F0 = 0;
    dword_1064D8F4 = (int)"InputDisable";
    dword_1064D8F8 = 0;
    dword_1064D8FC = 0;
    dword_1064D904 = (int)"Disable";
    dword_1064D908 = 0;
    dword_1064D90C = (int)sub_1023FA10;
    dword_1064D910 = 0;
    dword_1064D914 = 0;
    dword_1064D918 = 0;
    dword_1064D91C = 0;
    dword_1064D920 = 0;
    dword_1064D924 = 0;
    dword_1064D928 = (int)"InputToggleEnabled";
    dword_1064D92C = 0;
    dword_1064D930 = 0;
    word_1064D934 = 1;
    word_1064D936 = 8;
    dword_1064D938 = (int)"ToggleEnabled";
    dword_1064D93C = 0;
    dword_1064D940 = (int)sub_1023FA30;
    dword_1064D944 = 0;
    dword_1064D948 = 0;
    dword_1064D94C = 0;
    dword_1064D950 = 0;
    dword_1064D954 = 0;
    dword_1064D958 = 11;
    dword_1064D95C = (int)"m_OnPlay";
    dword_1064D960 = 800;
    dword_1064D964 = 0;
    dword_1064D968 = 1441793;
    dword_1064D96C = (int)"OnPlay";
    dword_1064D970 = (int)off_10614A2C;
    dword_1064D974 = 0;
    dword_1064D978 = 0;
    dword_1064D97C = 0;
    dword_1064D980 = 0;
    dword_1064D984 = 0;
    dword_1064D988 = 0;
  }
  dword_1064D2FC = 18;
  dword_1064D2F8 = (int)&unk_1064D5E4;
  return &dword_1064D2F8;
}
