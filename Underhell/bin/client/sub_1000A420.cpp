int __stdcall sub_1000A420(int *a1, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+14h] [ebp+8h]

  v9 = *a1;
  v5 = (*(int (__thiscall **)(int *, _DWORD, int, int))(v9 + 124))(a1, 0, 12, 1);
  v6 = (*(int (__thiscall **)(int *, const char *, int, int, int, int))(v9 + 336))(
         a1,
         "_rt_WaterReflection",
         a3,
         a3,
         2,
         v5);
  sub_10233410(v6);
  v7 = (*(int (__thiscall **)(int *, const char *, int, int, int, _DWORD, _DWORD, int, int))(*a1 + 336))(
         a1,
         "_rt_WaterRefraction",
         a3,
         a3,
         2,
         0,
         0,
         12,
         1);
  return sub_10233410(v7);
}
