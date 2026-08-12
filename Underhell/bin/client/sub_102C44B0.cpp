int sub_102C44B0()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "weapon_bfg_minigun",
           "C_WeaponBfgMinigun",
           2152,
           sub_101A3E30);
}
