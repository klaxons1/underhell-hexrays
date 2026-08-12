bool __thiscall sub_10389B80(_DWORD *this)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100CF460(this);
  v2 = v1;
  if ( !v1 )
    return 0;
  return *(char **)(v1 + 92) == "weapon_stunstick"
      || sub_100D6240((_DWORD *)v1, "weapon_stunstick")
      || *(char **)(v2 + 92) == "weapon_melee_baton"
      || sub_100D6240((_DWORD *)v2, "weapon_melee_baton");
}
