int sub_102C4370()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "weapon_rifle_sniper",
           "C_WeaponSniper",
           2152,
           sub_101A2C40);
}
