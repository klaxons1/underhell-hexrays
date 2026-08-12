char __thiscall sub_1012FA40(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  this[12] = a2;
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  this[6] = v4;
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 120))(dword_1047CA6C, v4, a3, 1, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *))(*this + 12))(this, this + 10, this + 11);
  return 1;
}
