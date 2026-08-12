void __thiscall sub_1006A580(_DWORD *this, int a2)
{
  int i; // edi
  unsigned int v4; // eax
  int v5; // edx
  unsigned int v6; // eax
  int v7; // ecx

  for ( i = 0; i < this[203]; ++i )
  {
    v4 = *(_DWORD *)(this[200] + 4 * i);
    if ( v4 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * i) & 0xFFF) + 2] != v4 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * i) & 0xFFF) + 1] )
    {
      v5 = this[203];
      if ( v5 > 0 )
      {
        *(_DWORD *)(this[200] + 4 * i) = *(_DWORD *)(this[200] + 4 * v5 - 4);
        --this[203];
      }
      if ( i >= this[203] )
        break;
    }
    v6 = *(_DWORD *)(this[200] + 4 * i);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * i) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * i) & 0xFFF) + 1];
    if ( *(_DWORD *)(v7 + 820) == 1 )
    {
      *(_DWORD *)(v7 + 820) = 0;
      sub_10069CA0(v7);
    }
  }
  this[205] = 0;
}
