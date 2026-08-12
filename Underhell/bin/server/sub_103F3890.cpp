int *sub_103F3890()
{
  if ( (dword_106EED80 & 1) == 0 )
  {
    dword_106EED80 |= 1u;
    dword_106EED64 = (int)"CPropVehiclePrisonerPod";
    dword_106EED6C = 0;
    dword_106EED70 = 0;
    dword_106EED74 = 0;
    dword_106EED78 = 0;
    dword_106EED7C = 0;
    dword_106EED68 = 23;
    atexit(sub_10479460);
  }
  dword_106841BC = (int)&dword_10642FF8;
  if ( (dword_106EED80 & 2) == 0 )
  {
    dword_106EED80 |= 2u;
    dword_106845BC = 0;
    dword_106845C0 = 0;
    dword_106845C4 = 0;
    dword_106845C8 = 0;
    dword_106845CC = 0;
    dword_106845D0 = 0;
    word_106845E4 = 1;
    word_106845E6 = 22;
    dword_106845F0 = 0;
    dword_106845F4 = 0;
    dword_106845F8 = 0;
    dword_106845FC = 0;
    dword_10684600 = 0;
    dword_10684604 = 0;
    word_10684618 = 1;
    word_1068461A = 22;
    dword_106845B8 = (int)off_10614A2C;
    dword_106845D4 = 11;
    dword_106845D8 = (int)"m_playerOff";
    dword_106845DC = 2160;
    dword_106845E0 = 0;
    dword_106845E8 = (int)"PlayerOff";
    dword_106845EC = (int)off_10614A2C;
    dword_10684608 = 11;
    dword_1068460C = (int)"m_OnOpen";
    dword_10684610 = 2184;
    dword_10684614 = 0;
    dword_1068461C = (int)"OnOpen";
    dword_10684620 = (int)off_10614A2C;
    dword_10684624 = 0;
    dword_10684628 = 0;
    dword_1068462C = 0;
    dword_10684630 = 0;
    dword_10684634 = 0;
    dword_10684638 = 0;
    dword_1068463C = 11;
    dword_10684640 = (int)"m_OnClose";
    dword_10684644 = 2208;
    dword_10684648 = 0;
    dword_1068464C = 1441793;
    dword_10684650 = (int)"OnClose";
    dword_10684654 = (int)off_10614A2C;
    dword_10684658 = 0;
    dword_1068465C = 0;
    dword_10684660 = 0;
    dword_10684664 = 0;
    dword_10684668 = 0;
    dword_1068466C = 0;
  }
  dword_106841B4 = 19;
  dword_106841B0 = (int)&unk_10684294;
  return &dword_106841B0;
}
