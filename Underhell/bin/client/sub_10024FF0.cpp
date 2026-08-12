int __thiscall sub_10024FF0(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = *(_DWORD *)dword_10413178;
  v3 = (*(int (__thiscall **)(_DWORD *))(*(this - 1) + 20))(this - 1);
  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 44))(this, v3);
  v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 156))(this, v4);
  v6 = (*(int (__thiscall **)(_DWORD *, int))(*this + 36))(this, v5);
  return (*(int (__thiscall **)(int, int))(v2 + 152))(dword_10413178, v6);
}
