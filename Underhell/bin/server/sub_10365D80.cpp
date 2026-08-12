int *sub_10365D80()
{
  if ( (dword_106E7DC0 & 1) == 0 )
  {
    dword_106E7DC0 |= 1u;
    dword_106E7DA4 = (int)"CNPC_EnemyFinderCombineCannon";
    dword_106E7DAC = 0;
    dword_106E7DB0 = 0;
    dword_106E7DB4 = 0;
    dword_106E7DB8 = 0;
    dword_106E7DBC = 0;
    dword_106E7DA8 = 29;
    atexit(sub_10478220);
  }
  dword_10672E70 = (int)&dword_10672E4C;
  dword_10672E68 = 6;
  dword_10672E64 = (int)&unk_10673214;
  return &dword_10672E64;
}
