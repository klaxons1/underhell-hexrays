bool __thiscall sub_10394250(_DWORD *this)
{
  int v2; // eax
  bool result; // al
  int v4; // eax

  v2 = sub_101679A0((int)"gordon_precriminal");
  result = 0;
  if ( sub_10167A00(v2) != 1 && (!sub_100CF460(this) || sub_100BDEE0((int)this, "ACT_IDLE_AIM_RIFLE_STIMULATED") != -1) )
  {
    if ( !sub_100CF460(this) )
      return 1;
    v4 = sub_100CF460(this);
    if ( *(char **)(v4 + 92) != "weapon_rpg" && !sub_100D6240((_DWORD *)v4, "weapon_rpg") )
      return 1;
  }
  return result;
}
