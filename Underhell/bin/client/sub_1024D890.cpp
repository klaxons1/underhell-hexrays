int __thiscall sub_1024D890(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 892))(this);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  (*(void (__thiscall **)(_DWORD *))(*this + 872))(this);
  this[101] = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68);
  v2 = dword_1047CA68;
  v3 = *(_DWORD *)dword_1047CA68;
  v4 = (*(int (__thiscall **)(_DWORD *))*this)(this);
  return (*(int (__thiscall **)(int, int))(v3 + 76))(v2, v4);
}
