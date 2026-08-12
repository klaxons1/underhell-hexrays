void __thiscall sub_100F6C40(_DWORD *this)
{
  int i; // esi
  unsigned int v3; // eax
  unsigned int v4; // ecx

  for ( i = this[1061] - 1; i >= 0; --i )
  {
    v3 = *(_DWORD *)(this[1058] + 4 * i);
    if ( v3 != -1 && off_1061BE18[4 * (*(_DWORD *)(this[1058] + 4 * i) & 0xFFF) + 2] == v3 >> 12 )
    {
      v4 = off_1061BE18[4 * (*(_DWORD *)(this[1058] + 4 * i) & 0xFFF) + 1];
      if ( v4 )
        sub_100EAE60(v4);
    }
  }
  this[1061] = 0;
}
