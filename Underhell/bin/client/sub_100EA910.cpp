char __thiscall sub_100EA910(_DWORD *this, int a2, int a3)
{
  this[1] = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)a2 + 44))(a2, "$light_position", 0, 0);
  this[2] = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)a2 + 44))(a2, "$light_color", 0, 0);
  return 1;
}
