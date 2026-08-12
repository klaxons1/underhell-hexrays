int __thiscall sub_102F3FA0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax

  if ( this[1458] == 3
    && (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
    && (v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this),
        (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 220))(v4) == 19)
    && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) == 1 )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 524))(v5, a2, a3);
    return a2;
  }
  else
  {
    sub_10394380(a2, a3);
    return a2;
  }
}
