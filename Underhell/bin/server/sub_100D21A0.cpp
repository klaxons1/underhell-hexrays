unsigned int __thiscall sub_100D21A0(_DWORD *this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax

  result = this[280];
  if ( result != -1 )
  {
    v4 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    result >>= 12;
    if ( v4[1] == result )
    {
      v5 = *v4;
      if ( v5 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
        if ( result )
        {
          v6 = this[280];
          if ( v6 != -1
            && off_1061BE18[4 * (this[280] & 0xFFF) + 2] == v6 >> 12
            && (v7 = off_1061BE18[4 * (this[280] & 0xFFF) + 1]) != 0 )
          {
            v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 288))(v7);
          }
          else
          {
            v8 = 0;
          }
          result = sub_100CF460(v8);
          if ( (_DWORD *)result == this )
            return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1004))(this, 0);
        }
      }
    }
  }
  return result;
}
