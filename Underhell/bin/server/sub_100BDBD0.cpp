unsigned int __thiscall sub_100BDBD0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  int *v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // esi

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    sub_100DA9C0(a2, a3);
    result = this[260];
    if ( result != -1 )
    {
      v6 = &off_1061BE18[4 * (this[260] & 0xFFF) + 1];
      result >>= 12;
      if ( off_1061BE18[4 * (this[260] & 0xFFF) + 2] == result )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (this[260] & 0xFFF) + 2] == result )
            v7 = *v6;
          else
            v7 = 0;
          result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 88))(v7, a2, a3);
        }
      }
    }
    v8 = this[261];
    if ( v8 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (v8 & 0xFFF) + 1];
      v9 = v8 >> 12;
      if ( *(_DWORD *)(result + 4) == v9 )
      {
        if ( *(_DWORD *)result )
        {
          if ( *(_DWORD *)(result + 4) == v9 )
            return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)result + 88))(*(_DWORD *)result, a2, a3);
          else
            return (*(int (__thiscall **)(_DWORD, int, int))(MEMORY[0] + 88))(0, a2, a3);
        }
      }
    }
  }
  return result;
}
