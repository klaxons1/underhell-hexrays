void __thiscall sub_1020E690(int this)
{
  int *v2; // ecx
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // [esp-14h] [ebp-24h]

  if ( *(_BYTE *)(this + 1640) )
  {
    *(float *)(this + 108) = *(float *)(this + 1628);
    if ( *(_DWORD *)(this + 248) != *(_DWORD *)(this + 1636) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 248);
      }
      *(_DWORD *)(this + 248) = *(_DWORD *)(this + 1636);
    }
    *(_BYTE *)(this + 1640) = 0;
  }
  v3 = *(_DWORD *)(this + 2052);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] == v5 ? *v4 : 0;
        sub_101129A0((unsigned __int16 *)(v6 + 320), *(_WORD *)(v6 + 356) | 4);
        if ( *(_DWORD *)(dword_106C1BB4 + 48) )
        {
          v7 = *(_DWORD *)(this + 2052);
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != *(_DWORD *)(this + 2052) >> 12 )
            v8 = 0;
          else
            v8 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          v9 = v8 + 320;
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != *(_DWORD *)(this + 2052) >> 12 )
            v10 = 0;
          else
            v10 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          v11 = v10 + 320;
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
          sub_1011BB20(this + 580, v12, v13, 0, 255, 0, 1, 1.0);
        }
      }
    }
  }
}
