int __thiscall sub_100CB8C0(_DWORD *this, int *a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v9; // [esp-4h] [ebp-10h]

  v4 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD, _DWORD))(*a2 + 16))(a2, 1, this[19], this[20], this[6]);
  v9 = this[5];
  v5 = this[4];
  this[3] = v4;
  (*(void (__thiscall **)(int *, int, int, int))(*a2 + 32))(a2, v4, v5, v9);
  v6 = *a2;
  v7 = sub_1022CF00(this + 14);
  (*(void (__thiscall **)(int *, _DWORD, int))(v6 + 28))(a2, this[3], v7);
  return (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 36))(a2, this[3], 0);
}
