int *sub_10415150()
{
  if ( (dword_106F10D4 & 1) == 0 )
  {
    dword_106F10D4 |= 1u;
    dword_106F10B8 = (int)"CPropAPC";
    dword_106F10C0 = 0;
    dword_106F10C4 = 0;
    dword_106F10C8 = 0;
    dword_106F10CC = 0;
    dword_106F10D0 = 0;
    dword_106F10BC = 8;
    atexit(sub_10479CD0);
  }
  dword_10688AB0 = (int)&dword_10653D60;
  if ( (dword_106F10D4 & 2) == 0 )
  {
    dword_106F10D4 |= 2u;
    dword_10688E94 = 0;
    dword_10688E98 = 0;
    dword_10688E9C = 0;
    dword_10688EA0 = 0;
    dword_10688EA4 = 0;
    dword_10688EA8 = 0;
    word_10688EBC = 1;
    word_10688EBE = 22;
    dword_10688EC8 = 0;
    dword_10688ECC = 0;
    dword_10688ED0 = 0;
    dword_10688ED4 = 0;
    dword_10688ED8 = 0;
    dword_10688EDC = 0;
    word_10688EF0 = 1;
    word_10688EF2 = 22;
    dword_10688E90 = (int)off_10614A2C;
    dword_10688EAC = 11;
    dword_10688EB0 = (int)"m_OnFiredMissile";
    dword_10688EB4 = 1828;
    dword_10688EB8 = 0;
    dword_10688EC0 = (int)"OnFiredMissile";
    dword_10688EC4 = (int)off_10614A2C;
    dword_10688EE0 = 11;
    dword_10688EE4 = (int)"m_OnDamaged";
    dword_10688EE8 = 1852;
    dword_10688EEC = 0;
    dword_10688EF4 = (int)"OnDamaged";
    dword_10688EF8 = (int)off_10614A2C;
    dword_10688EFC = 0;
    dword_10688F00 = 0;
    dword_10688F04 = 0;
    dword_10688F08 = 0;
    dword_10688F0C = 0;
    dword_10688F10 = 0;
    dword_10688F14 = 11;
    dword_10688F18 = (int)"m_OnDamagedByPlayer";
    dword_10688F1C = 1876;
    dword_10688F20 = 0;
    dword_10688F24 = 1441793;
    dword_10688F28 = (int)"OnDamagedByPlayer";
    dword_10688F2C = (int)off_10614A2C;
    dword_10688F30 = 0;
    dword_10688F34 = 0;
    dword_10688F38 = 0;
    dword_10688F3C = 0;
    dword_10688F40 = 0;
    dword_10688F44 = 0;
  }
  dword_10688AA8 = 19;
  dword_10688AA4 = (int)&unk_10688B6C;
  return &dword_10688AA4;
}
