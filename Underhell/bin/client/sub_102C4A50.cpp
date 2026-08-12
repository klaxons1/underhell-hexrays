int sub_102C4A50()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "weapon_melee_pipe",
           "C_WeaponPipe",
           2152,
           sub_101A3630);
}
