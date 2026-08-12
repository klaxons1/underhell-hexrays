void __stdcall sub_101584B0(int a1)
{
  int v1; // eax
  int v2; // ecx
  bool i; // zf
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // rt0
  double v8; // rt1

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 8);
  for ( i = v2 == v1 + 4; !i; i = v2 == *(_DWORD *)(a1 + 4) + 4 )
  {
    v4 = *(float *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v2 + 4);
    v5 = v4 + *(float *)(v2 + 36);
    *(float *)(v2 + 36) = v5;
    if ( v5 <= 1.0 )
    {
      v6 = *(float *)(a1 + 8);
      v7 = *(float *)(v2 + 28) * v6 + *(float *)(v2 + 16);
      v8 = v6 * *(float *)(v2 + 32) + *(float *)(v2 + 20);
      *(float *)(v2 + 12) = v6 * *(float *)(v2 + 24) + *(float *)(v2 + 12);
      *(float *)(v2 + 16) = v7;
      *(float *)(v2 + 20) = v8;
    }
    else
    {
      sub_100EB9C0(*(_DWORD *)a1, (_DWORD *)v2);
    }
    v2 = *(_DWORD *)(a1 + 16);
  }
}
