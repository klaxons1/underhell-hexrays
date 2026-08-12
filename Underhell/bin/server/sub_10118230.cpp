unsigned int __thiscall sub_10118230(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  int *v6; // ecx
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    sub_100BDBD0(this, a2, a3);
    result = this[285];
    if ( result != -1 )
    {
      v6 = &off_1061BE18[4 * (this[285] & 0xFFF) + 1];
      result >>= 12;
      if ( off_1061BE18[4 * (this[285] & 0xFFF) + 2] == result )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (this[285] & 0xFFF) + 2] == result )
            v7 = *v6;
          else
            v7 = 0;
          result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 88))(v7, a2, a3);
        }
      }
    }
    v8 = this[286];
    if ( v8 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (this[286] & 0xFFF) + 1];
      v9 = v8 >> 12;
      if ( off_1061BE18[4 * (this[286] & 0xFFF) + 2] == v9 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (this[286] & 0xFFF) + 2] == v9 )
            v10 = *(_DWORD *)result;
          else
            v10 = 0;
          result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 88))(v10, a2, a3);
        }
      }
    }
    v11 = this[288];
    if ( v11 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (this[288] & 0xFFF) + 1];
      v12 = v11 >> 12;
      if ( off_1061BE18[4 * (this[288] & 0xFFF) + 2] == v12 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (this[288] & 0xFFF) + 2] == v12 )
            v13 = *(_DWORD *)result;
          else
            v13 = 0;
          result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 88))(v13, a2, a3);
        }
      }
    }
    v14 = this[289];
    if ( v14 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (this[289] & 0xFFF) + 1];
      v15 = v14 >> 12;
      if ( off_1061BE18[4 * (this[289] & 0xFFF) + 2] == v15 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (this[289] & 0xFFF) + 2] == v15 )
            return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)result + 88))(*(_DWORD *)result, a2, a3);
          else
            return (*(int (__thiscall **)(_DWORD, int, int))(MEMORY[0] + 88))(0, a2, a3);
        }
      }
    }
  }
  return result;
}
