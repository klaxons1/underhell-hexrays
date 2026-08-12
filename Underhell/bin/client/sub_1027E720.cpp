int __thiscall sub_1027E720(_DWORD *this)
{
  int result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[56] + 128))(this[56]) )
    this[62] = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[56] + 772))(this[56]);
  else
    this[62] = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 128))(this[57]) )
    this[63] = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[57] + 772))(this[57]);
  else
    this[63] = 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 804))(this);
  *((_BYTE *)this + 264) = 1;
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  return result;
}
