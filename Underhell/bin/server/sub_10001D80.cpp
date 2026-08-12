_DWORD *sub_10001D80()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _DWORD *result; // eax

  v0 = (_DWORD *)sub_10184390(112);
  v1 = v0;
  if ( v0 )
  {
    sub_100BC600(v0);
    *v1 = &CAchievementHLXKillWithHopper::`vftable';
    v1[2] = &CAchievementHLXKillWithHopper::`vftable';
    result = v1;
  }
  else
  {
    result = 0;
  }
  result[4] = 44;
  result[3] = "HLX_KILL_ENEMY_WITHHOPPERMINE";
  result[9] = 5;
  *((_BYTE *)result + 40) = 0;
  return result;
}
