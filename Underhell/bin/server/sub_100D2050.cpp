bool __thiscall sub_100D2050(_DWORD *this)
{
  bool result; // al
  unsigned int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax

  result = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1276))(this) || (int)this[301] <= 0 )
  {
    v3 = this[280];
    if ( v3 == -1 )
      return 0;
    if ( off_1061BE18[4 * (this[280] & 0xFFF) + 2] != v3 >> 12 )
      return 0;
    v4 = off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    if ( !v4 )
      return 0;
    v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
    if ( !v5 || sub_100CF5D0(v5, this[299]) <= 0 )
      return 0;
  }
  return result;
}
