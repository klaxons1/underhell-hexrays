char __thiscall sub_100D1FD0(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1272))(this) && (int)this[300] > 0 )
    return 1;
  v2 = this[280];
  if ( v2 != -1
    && off_1061BE18[4 * (this[280] & 0xFFF) + 2] == v2 >> 12
    && (v3 = off_1061BE18[4 * (this[280] & 0xFFF) + 1]) != 0
    && (v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3)) != 0 )
  {
    if ( sub_100CF5D0(v4, this[298]) > 0 )
      return 1;
  }
  else if ( (int)this[294] > 0 )
  {
    return 1;
  }
  return 0;
}
