int *sub_102808F0()
{
  if ( (dword_106D1EE8 & 1) == 0 )
  {
    dword_106D1EE8 |= 1u;
    dword_106D1ECC = (int)"CWeightButton";
    dword_106D1ED4 = 0;
    dword_106D1ED8 = 0;
    dword_106D1EDC = 0;
    dword_106D1EE0 = 0;
    dword_106D1EE4 = 0;
    dword_106D1ED0 = 13;
    atexit(sub_10475470);
  }
  dword_10659C10 = (int)&dword_1060F348;
  if ( (dword_106D1EE8 & 2) == 0 )
  {
    dword_106D1EE8 |= 2u;
    dword_10659D28 = 0;
    dword_10659D2C = 0;
    dword_10659D30 = 0;
    dword_10659D34 = 0;
    dword_10659D38 = 0;
    dword_10659D3C = 0;
    word_10659D50 = 1;
    dword_10659D24 = (int)off_10614A2C;
    dword_10659D58 = (int)off_10614A2C;
    dword_10659D40 = 11;
    dword_10659D44 = (int)"m_OnReleased";
    dword_10659D48 = 824;
    dword_10659D4C = 0;
    word_10659D52 = 22;
    dword_10659D54 = (int)"OnReleased";
    dword_10659D5C = 0;
    dword_10659D60 = 0;
    dword_10659D64 = 0;
    dword_10659D68 = 0;
    dword_10659D6C = 0;
    dword_10659D70 = 0;
    dword_10659D74 = 0;
    dword_10659D78 = (int)sub_100390B0((char **)&dword_106D1ECC, "TriggerThink");
    dword_10659D7C = 0;
    dword_10659D80 = 0;
    dword_10659D84 = 2097153;
    dword_10659D88 = 0;
    dword_10659D8C = 0;
    dword_10659D90 = (int)sub_102806C0;
    dword_10659D94 = 0;
    dword_10659D98 = 0;
    dword_10659D9C = 0;
    dword_10659DA0 = 0;
    dword_10659DA4 = 0;
  }
  dword_10659C08 = 5;
  dword_10659C04 = (int)&unk_10659CA4;
  return &dword_10659C04;
}
