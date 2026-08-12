bool __thiscall sub_100E8AC0(_DWORD *this)
{
  _DWORD *v2; // esi
  bool result; // al
  int v4; // ebx
  int v5; // eax
  int v6; // edi

  v2 = this + 80;
  result = 1;
  if ( (*(int (__thiscall **)(_DWORD *))(this[80] + 44))(this + 80) != 1 )
  {
    v4 = *(_DWORD *)dword_106B31F0;
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 24))(this);
    v6 = (*(int (__thiscall **)(int, int))(v4 + 4))(dword_106B31F0, v5);
    if ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 6
      || (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v6) != 1 )
    {
      return 0;
    }
  }
  return result;
}
