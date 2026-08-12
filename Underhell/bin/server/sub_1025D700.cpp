int *sub_1025D700()
{
  if ( (dword_106C7FDC & 1) == 0 )
  {
    dword_106C7FDC |= 1u;
    dword_106C7FC0 = (int)"CChangeLevel";
    dword_106C7FC8 = 0;
    dword_106C7FCC = 0;
    dword_106C7FD0 = 0;
    dword_106C7FD4 = 0;
    dword_106C7FD8 = 0;
    dword_106C7FC4 = 12;
    atexit(sub_10474790);
  }
  dword_106515A0 = (int)&dword_1065151C;
  if ( (dword_106C7FDC & 2) == 0 )
  {
    dword_106C7FDC |= 2u;
    dword_10653508 = (int)sub_100390B0((char **)&dword_106C7FC0, "TouchChangeLevel");
    word_10653514 = 1;
    dword_10653524 = 0;
    dword_10653528 = 0;
    dword_1065352C = 0;
    dword_10653530 = 0;
    dword_10653534 = 0;
    word_10653548 = 1;
    word_1065354A = 8;
    dword_1065350C = 0;
    dword_10653510 = 0;
    word_10653516 = 32;
    dword_10653518 = 0;
    dword_1065351C = 0;
    dword_10653520 = (int)sub_1025C8C0;
    dword_10653538 = 0;
    dword_1065353C = (int)"InputChangeLevel";
    dword_10653540 = 0;
    dword_10653544 = 0;
    dword_1065354C = (int)"ChangeLevel";
    dword_10653550 = 0;
    dword_10653554 = (int)sub_1025D5F0;
    dword_10653558 = 0;
    dword_1065355C = 0;
    dword_10653560 = 0;
    dword_10653564 = 0;
    dword_10653568 = 0;
    dword_1065356C = 11;
    dword_10653570 = (int)"m_OnChangeLevel";
    dword_10653574 = 1160;
    dword_10653578 = 0;
    dword_1065357C = 1441793;
    dword_10653580 = (int)"OnChangeLevel";
    dword_10653584 = (int)off_10614A2C;
    dword_10653588 = 0;
    dword_1065358C = 0;
    dword_10653590 = 0;
    dword_10653594 = 0;
    dword_10653598 = 0;
    dword_1065359C = 0;
  }
  dword_10651598 = 5;
  dword_10651594 = (int)asc_1065349C;
  return &dword_10651594;
}
