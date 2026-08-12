int sub_102B2FD0()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, _DWORD *(*)()))(*v0 + 4))(
           v0,
           "func_monitor",
           "C_FuncMonitor",
           1200,
           sub_100535E0);
}
