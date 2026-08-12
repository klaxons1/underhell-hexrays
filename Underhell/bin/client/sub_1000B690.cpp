char __thiscall sub_1000B690(int *this)
{
  int v1; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v1 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  v3 = *this;
  v4 = (*(int (__thiscall **)(int *))(*this + 1124))(this);
  v5 = (*(int (__thiscall **)(int *, int))(*this + 996))(this, v4);
  v6 = (*(int (__thiscall **)(int *, int))(*this + 1120))(this, v5);
  v7 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 1116))(this, 0, v6);
  LOBYTE(v3) = (*(int (__thiscall **)(int *, int))(v3 + 892))(this, v7);
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  return v3;
}
