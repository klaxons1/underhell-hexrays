unsigned int __thiscall sub_1021ADE0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // ecx

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    sub_100DA9C0(this, a2, a3);
    v6 = this[216];
    if ( v6 != -1 && off_1061BE18[4 * (this[216] & 0xFFF) + 2] == v6 >> 12 )
    {
      v7 = off_1061BE18[4 * (this[216] & 0xFFF) + 1];
      if ( v7 )
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 88))(v7, a2, a3);
    }
    result = this[217];
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (this[217] & 0xFFF) + 2] == result )
      {
        v8 = off_1061BE18[4 * (this[217] & 0xFFF) + 1];
        if ( v8 )
          return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 88))(v8, a2, a3);
      }
    }
  }
  return result;
}
