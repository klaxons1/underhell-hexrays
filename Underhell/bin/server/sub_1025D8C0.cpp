int *sub_1025D8C0()
{
  if ( (dword_106C7FFC & 1) == 0 )
  {
    dword_106C7FFC |= 1u;
    dword_106C7FE0 = (int)"CTriggerCamera";
    dword_106C7FE8 = 0;
    dword_106C7FEC = 0;
    dword_106C7FF0 = 0;
    dword_106C7FF4 = 0;
    dword_106C7FF8 = 0;
    dword_106C7FE4 = 14;
    atexit(sub_10474810);
  }
  dword_10651660 = (int)&dword_1060F348;
  if ( (dword_106C7FFC & 2) == 0 )
  {
    dword_106C7FFC |= 2u;
    dword_10653B20 = (int)sub_100390B0((char **)&dword_106C7FE0, "FollowTarget");
    word_10653B2C = 1;
    dword_10653B3C = 0;
    dword_10653B40 = 0;
    dword_10653B44 = 0;
    dword_10653B48 = 0;
    dword_10653B4C = 0;
    dword_10653B68 = (int)off_10614A2C;
    dword_10653B24 = 0;
    dword_10653B28 = 0;
    word_10653B2E = 32;
    dword_10653B30 = 0;
    dword_10653B34 = 0;
    dword_10653B38 = (int)sub_1025B870;
    dword_10653B50 = 11;
    dword_10653B54 = (int)"m_OnEndFollow";
    dword_10653B58 = 916;
    dword_10653B5C = 0;
    dword_10653B60 = 1441793;
    dword_10653B64 = (int)"OnEndFollow";
    dword_10653B6C = 0;
    dword_10653B70 = 0;
    dword_10653B74 = 0;
    dword_10653B78 = 0;
    dword_10653B7C = 0;
    dword_10653B80 = 0;
  }
  dword_10651658 = 28;
  dword_10651654 = (int)&unk_106535D4;
  return &dword_10651654;
}
