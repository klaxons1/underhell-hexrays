void __thiscall sub_102EB560(_DWORD *this, int a2)
{
  int i; // edi
  unsigned int v4; // eax
  int v5; // ecx

  for ( i = this[6] - 1; i >= 0; --i )
  {
    v4 = *(_DWORD *)(this[3] + 8 * i + 4);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[3] + 8 * i + 4) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(this[3] + 8 * i + 4) & 0xFFF) + 1];
    if ( v5 == a2 )
    {
      if ( this[6] - i - 1 > 0 )
        memcpy((void *)(this[3] + 8 * i), (const void *)(this[3] + 8 * i + 8), 8 * (this[6] - i - 1));
      --this[6];
    }
  }
}
