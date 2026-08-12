char __thiscall sub_1006A0F0(int this, int a2)
{
  unsigned int v2; // eax
  int v3; // edi
  int v4; // esi
  unsigned int v5; // eax

  if ( *(_DWORD *)(a2 + 24) == 6 )
    LOBYTE(v2) = *(_BYTE *)(a2 + 8);
  else
    LOBYTE(v2) = 0;
  v3 = 0;
  for ( *(_BYTE *)(this + 828) = v2; v3 < *(_DWORD *)(this + 812); *(_BYTE *)(v2 + 828) = *(_BYTE *)(this + 828) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 800) + 4 * v3);
    if ( v2 == -1
      || (v2 >>= 12, off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 800) + 4 * v3) & 0xFFF) + 2] != v2)
      || !off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 800) + 4 * v3) & 0xFFF) + 1] )
    {
      v4 = *(_DWORD *)(this + 812);
      if ( v4 > 0 )
      {
        v2 = *(_DWORD *)(this + 800);
        *(_DWORD *)(v2 + 4 * v3) = *(_DWORD *)(v2 + 4 * v4 - 4);
        --*(_DWORD *)(this + 812);
      }
      if ( v3 >= *(_DWORD *)(this + 812) )
        break;
    }
    v5 = *(_DWORD *)(*(_DWORD *)(this + 800) + 4 * v3);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 800) + 4 * v3) & 0xFFF) + 2] != v5 >> 12 )
      v2 = 0;
    else
      v2 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 800) + 4 * v3) & 0xFFF) + 1];
    ++v3;
  }
  return v2;
}
