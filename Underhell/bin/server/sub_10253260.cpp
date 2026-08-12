int *sub_10253260()
{
  if ( (dword_106C7524 & 1) == 0 )
  {
    dword_106C7524 |= 1u;
    dword_106C7508 = (int)"CFuncTrainControls";
    dword_106C7510 = 0;
    dword_106C7514 = 0;
    dword_106C7518 = 0;
    dword_106C751C = 0;
    dword_106C7520 = 0;
    dword_106C750C = 18;
    atexit(sub_104746F0);
  }
  dword_10650014 = (int)&dword_1060F348;
  if ( (dword_106C7524 & 2) == 0 )
  {
    dword_106C7524 |= 2u;
    dword_106C74D8 = (int)sub_100390B0((char **)&dword_106C7508, "Find");
    dword_106C74DC = 0;
    dword_106C74E0 = 0;
    dword_106C74E4 = 2097153;
    dword_106C74E8 = 0;
    dword_106C74EC = 0;
    dword_106C74F0 = (int)sub_1024F980;
    dword_106C74F4 = 0;
    dword_106C74F8 = 0;
    dword_106C74FC = 0;
    dword_106C7500 = 0;
    dword_106C7504 = 0;
  }
  dword_1065000C = 1;
  dword_10650008 = (int)&unk_106C74D4;
  return &dword_10650008;
}
