bool __thiscall sub_102FED80(int this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // eax

  if ( (*(_DWORD *)(this + 252) & 0x100000) != 0 )
  {
    v2 = *(_DWORD *)(a2 + 44);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v4 ? *v3 : 0;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) != 5 )
            return 0;
        }
      }
    }
    return 1;
  }
  v7 = *(_DWORD *)(a2 + 64);
  if ( (v7 & 0x4001000) != 0 )
    return 0;
  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
    return *(_BYTE *)(this + 4124) == 0;
  if ( (v7 & 0x2040) != 0 )
    return 1;
  return *(_DWORD *)(this + 220) < -20;
}
