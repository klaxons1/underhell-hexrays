int sub_102C4910()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "weapon_slam",
           "C_Weapon_SLAM",
           2152,
           sub_101A3450);
}
