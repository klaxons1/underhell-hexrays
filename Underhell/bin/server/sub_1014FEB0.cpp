int *sub_1014FEB0()
{
  if ( (dword_106B2480 & 1) == 0 )
  {
    dword_106B2480 |= 1u;
    dword_106B2464 = (int)"CFuncLadder";
    dword_106B246C = 0;
    dword_106B2470 = 0;
    dword_106B2474 = 0;
    dword_106B2478 = 0;
    dword_106B247C = 0;
    dword_106B2468 = 11;
    atexit(sub_10471520);
  }
  dword_10626808 = (int)&dword_1060F348;
  if ( (dword_106B2480 & 2) == 0 )
  {
    dword_106B2480 |= 2u;
    dword_10626ABC = (int)off_10614A2C;
    dword_10626AC0 = 0;
    dword_10626AC4 = 0;
    dword_10626AC8 = 0;
    dword_10626ACC = 0;
    dword_10626AD0 = 0;
    dword_10626AD4 = 0;
    dword_10626AD8 = 11;
    dword_10626ADC = (int)"m_OnPlayerGotOffLadder";
    dword_10626AE0 = 888;
    dword_10626AE4 = 0;
    dword_10626AE8 = 1441793;
    dword_10626AEC = (int)"OnPlayerGotOffLadder";
    dword_10626AF0 = (int)off_10614A2C;
    dword_10626AF4 = 0;
    dword_10626AF8 = 0;
    dword_10626AFC = 0;
    dword_10626B00 = 0;
    dword_10626B04 = 0;
    dword_10626B08 = 0;
  }
  dword_10626800 = 10;
  dword_106267FC = (int)&unk_10626904;
  return &dword_106267FC;
}
