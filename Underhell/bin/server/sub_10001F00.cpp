_DWORD *sub_10001F00()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _DWORD *result; // eax

  v0 = (_DWORD *)sub_10184390(112);
  v1 = v0;
  if ( v0 )
  {
    sub_100BC600(v0);
    *v1 = &CAchievementHLXKillEliteSoldierWithOwnEnergyBall::`vftable';
    v1[2] = &CAchievementHLXKillEliteSoldierWithOwnEnergyBall::`vftable';
    result = v1;
  }
  else
  {
    result = 0;
  }
  result[4] = 48;
  result[3] = "HLX_KILL_ELITESOLDIER_WITHHISENERGYBALL";
  result[9] = 10;
  *((_BYTE *)result + 40) = 0;
  return result;
}
