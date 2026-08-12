int __thiscall sub_1027E170(_BYTE *this, int a2, int a3)
{
  int result; // eax

  sub_102366A0(this, a2, a3);
  (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 808))(this, a2, a3);
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 804))(this);
  this[264] = 1;
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
  return result;
}
