int __thiscall sub_1024B8E0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax

  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 104))(this);
  v6 = (*(int (__thiscall **)(int, int, int))(v4 + 216))(v3, a2, v5);
  return (*(int (__thiscall **)(_DWORD *, int))(this[54] + 4))(this + 54, v6);
}
