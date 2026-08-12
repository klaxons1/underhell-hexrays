unsigned int __thiscall sub_102371B0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  int i; // edi
  unsigned int v7; // eax
  int v8; // ecx

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    result = sub_100DA9C0(this, a2, a3);
    for ( i = 0; i < this[285]; ++i )
    {
      v7 = *(_DWORD *)(this[282] + 4 * i);
      if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(this[282] + 4 * i) & 0xFFF) + 1];
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 88))(v8, a2, a3);
    }
  }
  return result;
}
