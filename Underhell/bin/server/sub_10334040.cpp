char __thiscall sub_10334040(float *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi

  if ( !(unsigned __int8)sub_103944A0() )
    return 0;
  if ( sub_100296A0(this) )
  {
    if ( sub_100CF460(this) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
      {
        if ( sub_10050FC0((_DWORD *)this + 1127) )
        {
          v2 = sub_10050FC0((_DWORD *)this + 1127);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
            return 0;
        }
      }
    }
  }
  if ( sub_100CF460(this) && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
    return 0;
  v3 = sub_101679A0((int)"gordon_precriminal");
  if ( sub_10167A00(v3) == 1
    || (v4 = sub_100CF460(this), (v5 = v4) != 0)
    && (*(char **)(v4 + 92) == "weapon_ar2"
     || sub_100D6240((_DWORD *)v4, "weapon_ar2")
     || *(char **)(v5 + 92) == "weapon_rpg"
     || sub_100D6240((_DWORD *)v5, "weapon_rpg")
     || *(char **)(v5 + 92) == "weapon_shotgun"
     || sub_100D6240((_DWORD *)v5, "weapon_shotgun")) )
  {
    this[687] = 3.4028235e38;
    return 0;
  }
  return 1;
}
