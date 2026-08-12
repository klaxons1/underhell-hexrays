unsigned int __thiscall sub_100F8860(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  int i; // edi
  int v7; // ecx

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    result = sub_100BDBD0(this, a2, a3);
    for ( i = 0; i < this[296]; ++i )
    {
      result = *(_DWORD *)(this[293] + 4 * i);
      if ( result != -1 )
      {
        result >>= 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(this[293] + 4 * i) & 0xFFF) + 2] == result )
        {
          v7 = off_1061BE18[4 * (*(_DWORD *)(this[293] + 4 * i) & 0xFFF) + 1];
          if ( v7 )
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 88))(v7, a2, a3);
        }
      }
    }
  }
  return result;
}
