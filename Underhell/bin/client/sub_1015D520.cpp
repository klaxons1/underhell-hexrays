void __thiscall sub_1015D520(float *this, int a2)
{
  int v2; // eax
  int v4; // ecx
  bool i; // zf
  double v6; // st7
  double v7; // st7

  v2 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v2 + 8);
  for ( i = v4 == v2 + 4; !i; i = v4 == *(_DWORD *)(a2 + 4) + 4 )
  {
    v6 = *(float *)(a2 + 8);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
    v7 = v6 + *(float *)(v4 + 36);
    *(float *)(v4 + 36) = v7;
    if ( v7 > this[60] )
      sub_100EB9C0(*(_DWORD *)a2, (_DWORD *)v4);
    v4 = *(_DWORD *)(a2 + 16);
  }
}
