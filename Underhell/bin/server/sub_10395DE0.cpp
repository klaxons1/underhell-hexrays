char __thiscall sub_10395DE0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char result; // al
  int v9; // ecx

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 2424))(this);
  if ( !sub_10050FC0(v3)
    || (v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 2424))(this),
        v5 = sub_10050FC0(v4),
        !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5))
    || !a2
    || (*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2) != 20
    || (v6 = (*(int (__thiscall **)(_DWORD *))(*this + 1868))(this), (v7 = sub_100773C0(v6, (int)a2, 0)) == 0)
    || *(float *)(dword_106B31C8 + 12) - *(float *)(v7 + 28) <= 10.0
    || (result = sub_10023D10(a2, 1)) != 0 )
  {
    v9 = this[906];
    if ( v9 )
      return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 160))(v9, a2);
    else
      return sub_10027D40(this, (int)a2);
  }
  return result;
}
