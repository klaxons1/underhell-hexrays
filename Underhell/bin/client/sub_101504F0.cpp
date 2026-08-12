char __thiscall sub_101504F0(_DWORD *this, int a2, int a3)
{
  this[1] = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)a2 + 44))(a2, "$world_mins", 0, 0);
  this[2] = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)a2 + 44))(a2, "$world_maxs", 0, 0);
  return 1;
}
