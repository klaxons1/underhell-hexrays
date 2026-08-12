int *sub_10253790()
{
  if ( (dword_106C7564 & 1) == 0 )
  {
    dword_106C7564 |= 1u;
    dword_106C7548 = (int)"CFuncTrain";
    dword_106C7550 = 0;
    dword_106C7554 = 0;
    dword_106C7558 = 0;
    dword_106C755C = 0;
    dword_106C7560 = 0;
    dword_106C754C = 10;
    atexit(sub_104746D0);
  }
  dword_1064FFE0 = (int)&dword_1064FF8C;
  if ( (dword_106C7564 & 2) == 0 )
  {
    dword_106C7564 |= 2u;
    dword_10650B60 = (int)sub_100390B0((char **)&dword_106C7548, "Wait");
    word_10650B6C = 1;
    word_10650B6E = 32;
    dword_10650B64 = 0;
    dword_10650B68 = 0;
    dword_10650B70 = 0;
    dword_10650B74 = 0;
    dword_10650B78 = (int)sub_10251830;
    dword_10650B7C = 0;
    dword_10650B80 = 0;
    dword_10650B84 = 0;
    dword_10650B88 = 0;
    dword_10650B8C = 0;
    dword_10650B90 = 0;
    dword_10650B94 = (int)sub_100390B0((char **)&dword_106C7548, "Next");
    word_10650BA2 = 32;
    dword_10650BB0 = 0;
    dword_10650BB4 = 0;
    dword_10650BB8 = 0;
    dword_10650BBC = 0;
    dword_10650BC0 = 0;
    dword_10650BE4 = 0;
    dword_10650BE8 = 0;
    dword_10650BEC = 0;
    dword_10650BF0 = 0;
    dword_10650BF4 = 0;
    word_10650BA0 = 1;
    word_10650BD4 = 1;
    word_10650C08 = 1;
    dword_10650B98 = 0;
    dword_10650B9C = 0;
    dword_10650BA4 = 0;
    dword_10650BA8 = 0;
    dword_10650BAC = (int)sub_10251B40;
    dword_10650BC4 = 0;
    dword_10650BC8 = (int)"InputToggle";
    dword_10650BCC = 0;
    dword_10650BD0 = 0;
    word_10650BD6 = 8;
    dword_10650BD8 = (int)"Toggle";
    dword_10650BDC = 0;
    dword_10650BE0 = (int)sub_10253700;
    dword_10650BF8 = 0;
    dword_10650BFC = (int)"InputStart";
    dword_10650C00 = 0;
    dword_10650C04 = 0;
    word_10650C0A = 8;
    dword_10650C0C = (int)"Start";
    dword_10650C10 = 0;
    dword_10650C14 = (int)sub_10253720;
    dword_10650C18 = 0;
    dword_10650C1C = 0;
    dword_10650C20 = 0;
    dword_10650C24 = 0;
    dword_10650C28 = 0;
    dword_10650C2C = 0;
    dword_10650C30 = (int)"InputStop";
    dword_10650C34 = 0;
    dword_10650C38 = 0;
    dword_10650C3C = 524289;
    dword_10650C40 = (int)"Stop";
    dword_10650C44 = 0;
    dword_10650C48 = (int)sub_10253730;
    dword_10650C4C = 0;
    dword_10650C50 = 0;
    dword_10650C54 = 0;
    dword_10650C58 = 0;
    dword_10650C5C = 0;
  }
  dword_1064FFD8 = 11;
  dword_1064FFD4 = (int)&unk_10650A24;
  return &dword_1064FFD4;
}
