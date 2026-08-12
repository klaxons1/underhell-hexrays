unsigned int __thiscall sub_103183B0(unsigned int *this, _DWORD *a2, int a3)
{
  unsigned int v4; // edi
  unsigned int result; // eax
  signed int v6; // edi
  _DWORD *v7; // ebx
  int v8; // ecx

  v4 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(a2[2050] + 4 * (v4 >> 5))) == 0 )
  {
    result = sub_102B3ED0(this, a2, a3);
    v6 = 0;
    if ( (int)this[1042] > 0 )
    {
      v7 = this + 1037;
      do
      {
        if ( *v7 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
        result = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v8 + 88))(v8, a2, a3);
        ++v6;
        ++v7;
      }
      while ( v6 < (int)this[1042] );
    }
  }
  return result;
}
