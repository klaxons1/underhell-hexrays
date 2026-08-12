int *sub_10254040()
{
  if ( (dword_106C7584 & 1) == 0 )
  {
    dword_106C7584 |= 1u;
    dword_106C7568 = (int)"CFuncTrackTrain";
    dword_106C7570 = 0;
    dword_106C7574 = 0;
    dword_106C7578 = 0;
    dword_106C757C = 0;
    dword_106C7580 = 0;
    dword_106C756C = 15;
    atexit(sub_104746E0);
  }
  dword_1064FFF8 = (int)&dword_1060F348;
  if ( (dword_106C7584 & 2) == 0 )
  {
    dword_106C7584 |= 2u;
    dword_10651400 = 0;
    dword_10651404 = 0;
    dword_10651408 = 0;
    dword_1065140C = 0;
    dword_10651410 = 0;
    dword_10651414 = 0;
    word_10651428 = 1;
    dword_106513FC = (int)off_10614A2C;
    dword_10651430 = (int)off_10614A2C;
    dword_10651418 = 11;
    dword_1065141C = (int)"m_OnNext";
    dword_10651420 = 948;
    dword_10651424 = 0;
    word_1065142A = 22;
    dword_1065142C = (int)"OnNextPoint";
    dword_10651434 = 0;
    dword_10651438 = 0;
    dword_1065143C = 0;
    dword_10651440 = 0;
    dword_10651444 = 0;
    dword_10651448 = 0;
    dword_1065144C = 0;
    dword_10651450 = (int)sub_100390B0((char **)&dword_106C7568, "Next");
    word_1065145C = 1;
    word_1065145E = 32;
    dword_10651454 = 0;
    dword_10651458 = 0;
    dword_10651460 = 0;
    dword_10651464 = 0;
    dword_10651468 = (int)sub_102526E0;
    dword_1065146C = 0;
    dword_10651470 = 0;
    dword_10651474 = 0;
    dword_10651478 = 0;
    dword_1065147C = 0;
    dword_10651480 = 0;
    dword_10651484 = (int)sub_100390B0((char **)&dword_106C7568, "Find");
    word_10651492 = 32;
    dword_10651488 = 0;
    dword_1065148C = 0;
    word_10651490 = 1;
    dword_10651494 = 0;
    dword_10651498 = 0;
    dword_1065149C = (int)sub_10252C30;
    dword_106514A0 = 0;
    dword_106514A4 = 0;
    dword_106514A8 = 0;
    dword_106514AC = 0;
    dword_106514B0 = 0;
    dword_106514B4 = 0;
    dword_106514B8 = (int)sub_100390B0((char **)&dword_106C7568, "NearestPath");
    dword_106514BC = 0;
    dword_106514C0 = 0;
    word_106514C4 = 1;
    word_106514C6 = 32;
    dword_106514C8 = 0;
    dword_106514CC = 0;
    dword_106514D0 = (int)sub_10252DF0;
    dword_106514D4 = 0;
    dword_106514D8 = 0;
    dword_106514DC = 0;
    dword_106514E0 = 0;
    dword_106514E4 = 0;
    dword_106514E8 = 0;
    dword_106514EC = (int)sub_100390B0((char **)&dword_106C7568, "DeadEnd");
    dword_106514F0 = 0;
    dword_106514F4 = 0;
    dword_106514F8 = 2097153;
    dword_106514FC = 0;
    dword_10651500 = 0;
    dword_10651504 = (int)sub_1024F6D0;
    dword_10651508 = 0;
    dword_1065150C = 0;
    dword_10651510 = 0;
    dword_10651514 = 0;
    dword_10651518 = 0;
  }
  dword_1064FFF0 = 42;
  dword_1064FFEC = (int)&unk_10650C94;
  return &dword_1064FFEC;
}
