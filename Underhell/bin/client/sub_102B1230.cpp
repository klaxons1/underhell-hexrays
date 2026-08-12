int sub_102B1230()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "grenade",
           "CBaseGrenade",
           3392,
           sub_10011AD0);
}
