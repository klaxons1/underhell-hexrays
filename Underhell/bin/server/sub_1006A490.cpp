void __thiscall sub_1006A490(_DWORD *this, int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  int v5; // edx
  unsigned int v6; // eax
  int v7; // ecx

  v3 = 0;
  if ( (int)this[203] <= 0 )
  {
    this[205] = 1;
  }
  else
  {
    do
    {
      v4 = *(_DWORD *)(this[200] + 4 * v3);
      if ( v4 == -1
        || off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 2] != v4 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 1] )
      {
        v5 = this[203];
        if ( v5 > 0 )
        {
          *(_DWORD *)(this[200] + 4 * v3) = *(_DWORD *)(this[200] + 4 * v5 - 4);
          --this[203];
        }
        if ( v3 >= this[203] )
          break;
      }
      v6 = *(_DWORD *)(this[200] + 4 * v3);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 1];
      if ( !*(_DWORD *)(v7 + 820) )
      {
        *(_DWORD *)(v7 + 820) = 1;
        sub_10069CA0(v7);
      }
      ++v3;
    }
    while ( v3 < this[203] );
    this[205] = 1;
  }
}
