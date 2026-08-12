unsigned int __thiscall sub_100C9810(unsigned int *this, _DWORD *a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  unsigned int *v6; // esi
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // edx
  int v11; // eax

  v4 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(a2[2050] + 4 * (v4 >> 5))) == 0 )
  {
    result = sub_100BDBD0(this, (int)a2, a3);
    if ( *a2 == this[6] )
    {
      v6 = this + 477;
      v7 = 48;
      do
      {
        result = *v6;
        if ( *v6 != -1 )
        {
          result >>= 12;
          if ( off_1061BE18[4 * (*v6 & 0xFFF) + 2] == result )
          {
            v8 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
            if ( v8 )
              result = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v8 + 88))(v8, a2, a3);
          }
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v9 = this[525];
      if ( v9 != -1 )
      {
        result = (unsigned int)&off_1061BE18[4 * (this[525] & 0xFFF) + 1];
        v10 = v9 >> 12;
        if ( off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v10 )
        {
          if ( *(_DWORD *)result )
          {
            result = off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v10 ? *(_DWORD *)result : 0;
            if ( (*(_DWORD *)(result + 192) & 0x20) == 0 )
            {
              v11 = sub_1026A890(this + 525);
              return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v11 + 88))(v11, a2, a3);
            }
          }
        }
      }
    }
  }
  return result;
}
