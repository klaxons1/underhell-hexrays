char __thiscall sub_100D1C90(_DWORD *this)
{
  int v3; // ecx
  _DWORD *v4; // esi

  if ( (int)this[315] >= 1 )
    return 0;
  if ( this[280] != -1 && off_1061BE18[4 * (this[280] & 0xFFF) + 2] == this[280] >> 12 )
  {
    v3 = off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    if ( v3 )
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3);
      if ( v4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 320))(v4)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1272))(this)
          && this[300] < (*(int (__thiscall **)(_DWORD *))(*this + 1216))(this) / 2
          && sub_100CF5D0(v4, this[298]) > 0 )
        {
          return 1;
        }
      }
    }
  }
  return 0;
}
