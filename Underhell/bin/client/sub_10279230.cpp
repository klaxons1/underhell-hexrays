int __thiscall sub_10279230(int *this, _DWORD *a2)
{
  int v3; // eax
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  sub_10241C00(this, a2);
  v3 = sub_1022A800(a2, "linespacing", 0);
  this[85] = v3;
  if ( !v3 )
    this[85] = 20;
  result = (*(int (__thiscall **)(int *))(*this + 84))(this);
  if ( (_BYTE)result )
  {
    v5 = dword_1047CA7C;
    v6 = *(_DWORD *)dword_1047CA7C;
    v7 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, this[85]);
    result = (*(int (__thiscall **)(int, int))(v6 + 52))(v5, v7);
    this[85] = result;
  }
  return result;
}
