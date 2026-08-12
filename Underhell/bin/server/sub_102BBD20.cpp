unsigned int __thiscall sub_102BBD20(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  unsigned int v6; // esi
  unsigned int v7; // esi

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    result = sub_100BDBD0(this, a2, a3);
    v6 = this[312];
    if ( v6 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (v6 & 0xFFF) + 1];
      v7 = v6 >> 12;
      if ( *(_DWORD *)(result + 4) == v7 )
      {
        if ( *(_DWORD *)result )
        {
          if ( *(_DWORD *)(result + 4) == v7 )
            return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)result + 88))(*(_DWORD *)result, a2, a3);
          else
            return (*(int (__thiscall **)(_DWORD, int, int))(MEMORY[0] + 88))(0, a2, a3);
        }
      }
    }
  }
  return result;
}
