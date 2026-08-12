int __thiscall sub_102614A0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx

  v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  if ( v3 == -1 )
    return 0;
  v4 = &dword_1069E3E4[4 * (v3 & 0xFFF)];
  if ( v4[1] != v3 >> 12 )
    return 0;
  v5 = *v4;
  if ( !v5 )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  if ( !v6 )
    return 0;
  v7 = this[3];
  if ( v7 )
  {
    if ( (v7 & *(_DWORD *)(v6 + 256)) == 0 )
      return 0;
  }
  v8 = this[4];
  if ( v8 < this[2] )
  {
    *(_DWORD *)(this[1] + 4 * v8) = v6;
    ++this[4];
    return 0;
  }
  return 1;
}
