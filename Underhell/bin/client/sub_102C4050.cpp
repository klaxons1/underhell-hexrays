int sub_102C4050()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "weapon_shotgun",
           "C_WeaponShotgun",
           2152,
           sub_101A25B0);
}
