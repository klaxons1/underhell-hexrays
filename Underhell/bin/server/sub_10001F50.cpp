_DWORD *sub_10001F50()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _DWORD *result; // eax

  v0 = (_DWORD *)sub_10184390(112);
  v1 = v0;
  if ( v0 )
  {
    sub_100BC600(v0);
    *v1 = &CAchievementHLXKillWithPhysicsObjects::`vftable';
    v1[2] = &CAchievementHLXKillWithPhysicsObjects::`vftable';
    result = v1;
  }
  else
  {
    result = 0;
  }
  result[4] = 43;
  result[3] = "HLX_KILL_ENEMIES_WITHPHYSICS";
  result[9] = 5;
  *((_BYTE *)result + 40) = 0;
  return result;
}
