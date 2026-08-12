char __thiscall sub_10043250(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // eax

  v2 = sub_100E9550(2, 16, 0, 0);
  if ( this )
    v3 = this + 905;
  else
    v3 = 0;
  v4 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, v3);
  this[919] = v4;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 8))(v4, v2, 1);
  return 1;
}
