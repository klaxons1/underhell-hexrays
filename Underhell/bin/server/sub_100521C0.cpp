void __thiscall sub_100521C0(_DWORD *this)
{
  int v2; // edx
  unsigned int v3; // eax
  int v4; // ecx

  v2 = this[1];
  if ( *(_DWORD *)(v2 + 2888) != -1
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] == *(_DWORD *)(v2 + 2888) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1] )
  {
    v3 = *(_DWORD *)(v2 + 2888);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1];
    if ( *(_WORD *)(v4 + 816) == 900 )
    {
      sub_10070510(0.0);
      sub_100448D0((_DWORD *)this[1], 0);
    }
  }
}
