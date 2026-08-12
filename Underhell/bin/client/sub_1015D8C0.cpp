void __thiscall sub_1015D8C0(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // ecx
  bool i; // zf
  double v5; // st7
  double v6; // st4
  double v7; // rt0
  double v8; // st7

  if ( this[276] )
  {
    v2 = *(_DWORD *)(a2 + 4);
    v3 = *(_DWORD *)(v2 + 8);
    for ( i = v3 == v2 + 4; !i; i = v3 == *(_DWORD *)(a2 + 4) + 4 )
    {
      v5 = *(float *)(a2 + 8);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 4);
      v6 = *(float *)(v3 + 32);
      v7 = *(float *)(v3 + 28) * v5;
      *(float *)(v3 + 12) = *(float *)(v3 + 24) * v5 + *(float *)(v3 + 12);
      *(float *)(v3 + 16) = v7 + *(float *)(v3 + 16);
      *(float *)(v3 + 20) = v5 * v6 + *(float *)(v3 + 20);
      v8 = *(float *)(a2 + 8) + *(float *)(v3 + 44);
      *(float *)(v3 + 44) = v8;
      if ( v8 >= *(float *)(v3 + 40) )
        sub_100EB9C0(*(_DWORD *)a2, (_DWORD *)v3);
      v3 = *(_DWORD *)(a2 + 16);
    }
  }
}
