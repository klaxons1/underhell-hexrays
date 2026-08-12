void __stdcall sub_1004AE90(int a1)
{
  int v1; // eax
  int v2; // ecx
  bool i; // zf
  double v4; // st7
  double v5; // st5
  double v6; // st6
  double v7; // st7

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 8);
  for ( i = v2 == v1 + 4; !i; i = v2 == *(_DWORD *)(a1 + 4) + 4 )
  {
    v4 = *(float *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v2 + 4);
    v5 = *(float *)(v2 + 28) * v4;
    v6 = *(float *)(v2 + 32) * v4;
    *(float *)(v2 + 12) = *(float *)(v2 + 24) * v4 + *(float *)(v2 + 12);
    *(float *)(v2 + 16) = v5 + *(float *)(v2 + 16);
    *(float *)(v2 + 20) = v6 + *(float *)(v2 + 20);
    v7 = v4 + *(float *)(v2 + 44);
    *(float *)(v2 + 44) = v7;
    if ( v7 >= *(float *)(v2 + 40) )
      sub_100EB9C0(v2);
    v2 = *(_DWORD *)(a1 + 16);
  }
}
