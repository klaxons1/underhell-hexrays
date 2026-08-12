int *sub_10365C60()
{
  if ( (dword_106E7DA0 & 1) == 0 )
  {
    dword_106E7DA0 |= 1u;
    dword_106E7D84 = (int)"CNPC_EnemyFinder";
    dword_106E7D8C = 0;
    dword_106E7D90 = 0;
    dword_106E7D94 = 0;
    dword_106E7D98 = 0;
    dword_106E7D9C = 0;
    dword_106E7D88 = 16;
    atexit(sub_10478210);
  }
  dword_10672E58 = (int)&dword_105FE114;
  if ( (dword_106E7DA0 & 2) == 0 )
  {
    dword_106E7DA0 |= 2u;
    dword_10673190 = (int)off_10614A2C;
    dword_10673194 = 0;
    dword_10673198 = 0;
    dword_1067319C = 0;
    dword_106731A0 = 0;
    dword_106731A4 = 0;
    dword_106731A8 = 0;
    dword_106731AC = 11;
    dword_106731B0 = (int)"m_OnAcquireEnemies";
    dword_106731B4 = 3732;
    dword_106731B8 = 0;
    dword_106731BC = 1441793;
    dword_106731C0 = (int)"OnAcquireEnemies";
    dword_106731C4 = (int)off_10614A2C;
    dword_106731C8 = 0;
    dword_106731CC = 0;
    dword_106731D0 = 0;
    dword_106731D4 = 0;
    dword_106731D8 = 0;
    dword_106731DC = 0;
  }
  dword_10672E50 = 11;
  dword_10672E4C = (int)asc_10672FA4;
  return &dword_10672E4C;
}
