int *sub_10138330()
{
  if ( (dword_106AFF64 & 1) == 0 )
  {
    dword_106AFF64 |= 1u;
    dword_106AFF48 = (int)"CEnvLaser";
    dword_106AFF50 = 0;
    dword_106AFF54 = 0;
    dword_106AFF58 = 0;
    dword_106AFF5C = 0;
    dword_106AFF60 = 0;
    dword_106AFF4C = 9;
    atexit(sub_10470F40);
  }
  dword_10620950 = (int)&dword_10612968;
  if ( (dword_106AFF64 & 2) == 0 )
  {
    dword_106AFF64 |= 2u;
    dword_10620AE4 = (int)sub_100390B0((char **)&dword_106AFF48, "StrikeThink");
    word_10620AF0 = 1;
    dword_10620B00 = 0;
    dword_10620B04 = 0;
    dword_10620B08 = 0;
    dword_10620B0C = 0;
    dword_10620B10 = 0;
    word_10620AF2 = 32;
    word_10620B24 = 1;
    word_10620B26 = 8;
    dword_10620AE8 = 0;
    dword_10620AEC = 0;
    dword_10620AF4 = 0;
    dword_10620AF8 = 0;
    dword_10620AFC = (int)&loc_10137F40;
    dword_10620B14 = 0;
    dword_10620B18 = (int)"InputTurnOn";
    dword_10620B1C = 0;
    dword_10620B20 = 0;
    dword_10620B28 = (int)"TurnOn";
    dword_10620B2C = 0;
    dword_10620B30 = (int)sub_101382B0;
    dword_10620B34 = 0;
    dword_10620B38 = 0;
    dword_10620B3C = 0;
    dword_10620B40 = 0;
    dword_10620B44 = 0;
    dword_10620B48 = 0;
    dword_10620B4C = (int)"InputTurnOff";
    dword_10620B50 = 0;
    dword_10620B54 = 0;
    word_10620B58 = 1;
    word_10620B5A = 8;
    dword_10620B5C = (int)"TurnOff";
    dword_10620B60 = 0;
    dword_10620B64 = (int)sub_10137EF0;
    dword_10620B68 = 0;
    dword_10620B6C = 0;
    dword_10620B70 = 0;
    dword_10620B74 = 0;
    dword_10620B78 = 0;
    dword_10620B7C = 0;
    dword_10620B80 = (int)"InputToggle";
    dword_10620B84 = 0;
    dword_10620B88 = 0;
    dword_10620B8C = 524289;
    dword_10620B90 = (int)"Toggle";
    dword_10620B94 = 0;
    dword_10620B98 = (int)sub_101382D0;
    dword_10620B9C = 0;
    dword_10620BA0 = 0;
    dword_10620BA4 = 0;
    dword_10620BA8 = 0;
    dword_10620BAC = 0;
  }
  dword_10620948 = 9;
  dword_10620944 = (int)&unk_106209DC;
  return &dword_10620944;
}
