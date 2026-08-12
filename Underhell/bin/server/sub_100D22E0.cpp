unsigned int __thiscall sub_100D22E0(_DWORD *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  _DWORD *v7; // eax

  result = this[280];
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      v4 = *v3;
      if ( v4 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
        if ( result )
        {
          v5 = this[280];
          if ( v5 != -1
            && off_1061BE18[4 * (this[280] & 0xFFF) + 2] == v5 >> 12
            && (v6 = off_1061BE18[4 * (this[280] & 0xFFF) + 1]) != 0 )
          {
            v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 288))(v6);
          }
          else
          {
            v7 = 0;
          }
          result = sub_100CF460(v7);
          if ( (_DWORD *)result == this )
            return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1004))(this, 0);
        }
      }
    }
  }
  return result;
}
