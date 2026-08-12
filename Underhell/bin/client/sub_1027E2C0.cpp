int __thiscall sub_1027E2C0(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = this[53];
  if ( v3 )
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 36))(v3, a2, 0, this[58], this[59]);
  *((_BYTE *)this + 264) = 1;
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  return result;
}
