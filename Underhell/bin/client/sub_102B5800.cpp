int sub_102B5800()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "env_detail_controller",
           "CEnvDetailController",
           1200,
           sub_1009C510);
}
