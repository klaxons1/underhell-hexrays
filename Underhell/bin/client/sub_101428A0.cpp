char __thiscall sub_101428A0(_DWORD *this, int a2)
{
  int v3; // edi

  v3 = sub_101164B0();
  this[3] = 0;
  this[2] = 0;
  this[4] = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  this[5] = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
  return 1;
}
