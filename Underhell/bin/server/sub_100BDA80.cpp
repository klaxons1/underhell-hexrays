unsigned int __thiscall sub_100BDA80(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // esi
  unsigned int result; // eax
  int *v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    sub_100DA9C0(a2, a3);
    result = this[200];
    if ( result != -1 )
    {
      v6 = &off_1061BE18[4 * (this[200] & 0xFFF) + 1];
      v7 = result >> 12;
      if ( off_1061BE18[4 * (this[200] & 0xFFF) + 2] == this[200] >> 12 )
      {
        result = *v6;
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (this[200] & 0xFFF) + 2] != v7 )
            result = 0;
          v8 = *(_DWORD *)(result + 308);
          if ( v8 != -1 && off_1061BE18[4 * (v8 & 0xFFF) + 2] == v8 >> 12 && off_1061BE18[4 * (v8 & 0xFFF) + 1] )
            sub_100D83F0(0);
          else
            sub_100D83F0(8);
          v9 = this[200];
          if ( v9 == -1 || off_1061BE18[4 * (this[200] & 0xFFF) + 2] != v9 >> 12 )
            v10 = 0;
          else
            v10 = off_1061BE18[4 * (this[200] & 0xFFF) + 1];
          return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 88))(v10, a2, a3);
        }
      }
    }
  }
  return result;
}
