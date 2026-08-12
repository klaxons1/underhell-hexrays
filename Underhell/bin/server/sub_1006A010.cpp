unsigned int __thiscall sub_1006A010(_DWORD *this, int a2)
{
  unsigned int *v2; // eax
  int v3; // edi
  unsigned int result; // eax
  int v5; // esi
  unsigned int v6; // eax

  v2 = (unsigned int *)(a2 + 8);
  v3 = 0;
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = (unsigned int *)&a2;
  }
  result = *v2;
  this[206] = result;
  if ( (int)this[203] > 0 )
  {
    do
    {
      result = *(_DWORD *)(this[200] + 4 * v3);
      if ( result == -1
        || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 2] != result)
        || !off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 1] )
      {
        v5 = this[203];
        if ( v5 > 0 )
        {
          result = this[200];
          *(_DWORD *)(result + 4 * v3) = *(_DWORD *)(result + 4 * v5 - 4);
          --this[203];
        }
        if ( v3 >= this[203] )
          break;
      }
      v6 = *(_DWORD *)(this[200] + 4 * v3);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 2] != v6 >> 12 )
        result = 0;
      else
        result = off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v3) & 0xFFF) + 1];
      ++v3;
      *(_DWORD *)(result + 824) = this[206];
    }
    while ( v3 < this[203] );
  }
  return result;
}
