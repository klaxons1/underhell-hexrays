int *sub_1017F390()
{
  if ( (dword_106B64A8 & 1) == 0 )
  {
    dword_106B64A8 |= 1u;
    dword_106B648C = (int)"CMathColorBlend";
    dword_106B6494 = 0;
    dword_106B6498 = 0;
    dword_106B649C = 0;
    dword_106B64A0 = 0;
    dword_106B64A4 = 0;
    dword_106B6490 = 15;
    atexit(sub_10471F70);
  }
  dword_1062CDA0 = (int)&dword_1060F348;
  if ( (dword_106B64A8 & 2) == 0 )
  {
    dword_106B64A8 |= 2u;
    flt_1062DCCC = 0.0;
    flt_1062DD00 = 0.0;
    dword_1062DC80 = (int)off_10614A2C;
    flt_1062DD34 = 0.0;
    flt_1062DD68 = 0.0;
    word_1062DCAE = 6;
    word_1062DCE2 = 6;
    dword_1062DC84 = 0;
    dword_1062DC88 = 0;
    dword_1062DC8C = 0;
    dword_1062DC90 = 0;
    dword_1062DC94 = 0;
    dword_1062DC98 = 0;
    word_1062DCAC = 1;
    word_1062DCE0 = 1;
    word_1062DD14 = 1;
    dword_1062DC9C = 1;
    dword_1062DCA0 = (int)"m_flInMin";
    dword_1062DCA4 = 800;
    dword_1062DCA8 = 0;
    dword_1062DCB0 = (int)"inmin";
    dword_1062DCB4 = 0;
    dword_1062DCB8 = 0;
    dword_1062DCBC = 0;
    dword_1062DCC0 = 4;
    dword_1062DCC4 = 0;
    dword_1062DCC8 = 0;
    dword_1062DCD0 = 1;
    dword_1062DCD4 = (int)"m_flInMax";
    dword_1062DCD8 = 804;
    dword_1062DCDC = 0;
    dword_1062DCE4 = (int)"inmax";
    dword_1062DCE8 = 0;
    dword_1062DCEC = 0;
    dword_1062DCF0 = 0;
    dword_1062DCF4 = 4;
    dword_1062DCF8 = 0;
    dword_1062DCFC = 0;
    dword_1062DD04 = 9;
    dword_1062DD08 = (int)"m_OutColor1";
    dword_1062DD0C = 808;
    dword_1062DD10 = 0;
    word_1062DD16 = 6;
    dword_1062DD18 = (int)"colormin";
    dword_1062DD1C = 0;
    dword_1062DD20 = 0;
    dword_1062DD24 = 0;
    dword_1062DD28 = 4;
    dword_1062DD2C = 0;
    dword_1062DD30 = 0;
    dword_1062DD38 = 9;
    dword_1062DD3C = (int)"m_OutColor2";
    dword_1062DD40 = 812;
    dword_1062DD44 = 0;
    dword_1062DD48 = 393217;
    dword_1062DD4C = (int)"colormax";
    dword_1062DD50 = 0;
    dword_1062DD54 = 0;
    dword_1062DD58 = 0;
    dword_1062DD5C = 4;
    dword_1062DD60 = 0;
    dword_1062DD64 = 0;
  }
  dword_1062CD98 = 6;
  dword_1062CD94 = (int)&unk_1062DC34;
  return &dword_1062CD94;
}
