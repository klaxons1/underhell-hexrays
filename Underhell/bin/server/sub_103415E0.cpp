int __thiscall sub_103415E0(_DWORD *this, int a2)
{
  int v2; // esi

  v2 = a2;
  if ( *(char **)(a2 + 92) == "weapon_ar2" || sub_100D6240((_DWORD *)a2, "weapon_ar2") )
    return (*(_DWORD *)(dword_10698344 + 48) != 0) + 2;
  if ( *(char **)(v2 + 92) == "weapon_shotgun" || sub_100D6240((_DWORD *)v2, "weapon_shotgun") )
  {
    if ( this[212] != 1 )
    {
      a2 = 1;
      sub_10031670(this + 212, &a2);
    }
    return 4;
  }
  else if ( *(char **)(v2 + 92) == "weapon_smg1" || sub_100D6240((_DWORD *)v2, "weapon_smg1") )
  {
    return 2;
  }
  else
  {
    return sub_1024B1A0(v2);
  }
}
