void __thiscall sub_101C3810(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  float *v4; // eax
  int v5; // esi
  unsigned int v6; // eax

  if ( a2 )
  {
    v2 = this + 1;
    v3 = 16 * sub_10339720(this + 1);
    *(_DWORD *)(v3 + *v2) = a2;
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v4 = (float *)(*v2 + v3 + 4);
    *v4 = *(float *)(a2 + 580);
    v4[1] = *(float *)(a2 + 584);
    v4[2] = *(float *)(a2 + 588);
    if ( *(_DWORD *)(a2 + 312) == -1
      || off_1061BE18[4 * (*(_DWORD *)(a2 + 312) & 0xFFF) + 2] != *(_DWORD *)(a2 + 312) >> 12 )
    {
      v5 = 0;
    }
    else
    {
      v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 312) & 0xFFF) + 1];
    }
    while ( v5 )
    {
      sub_101C3810(v5);
      v6 = *(_DWORD *)(v5 + 316);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 2] != v6 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 1];
    }
  }
}
