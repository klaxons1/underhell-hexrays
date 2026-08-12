void __thiscall sub_101631D0(int this, int a2)
{
  int v2; // eax
  int v3; // ecx
  bool i; // zf
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // rt0
  double v9; // rt1

  if ( (*(_BYTE *)(this + 152) & 0x40) != 0 || !*(_DWORD *)(this + 260) )
  {
    v2 = *(_DWORD *)(a2 + 4);
    v3 = *(_DWORD *)(v2 + 8);
    for ( i = v3 == v2 + 4; !i; i = v3 == *(_DWORD *)(a2 + 4) + 4 )
    {
      v5 = *(float *)(a2 + 8);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 4);
      v6 = v5 + *(float *)(v3 + 44);
      *(float *)(v3 + 44) = v6;
      if ( v6 <= *(float *)(v3 + 48) )
      {
        *(float *)(v3 + 36) = *(float *)(v3 + 40) * *(float *)(a2 + 8) + *(float *)(v3 + 36);
        v7 = *(float *)(a2 + 8);
        v8 = *(float *)(v3 + 28) * v7 + *(float *)(v3 + 16);
        v9 = v7 * *(float *)(v3 + 32) + *(float *)(v3 + 20);
        *(float *)(v3 + 12) = *(float *)(v3 + 24) * v7 + *(float *)(v3 + 12);
        *(float *)(v3 + 16) = v8;
        *(float *)(v3 + 20) = v9;
      }
      else
      {
        sub_100EB9C0(*(_DWORD *)a2, (_DWORD *)v3);
      }
      v3 = *(_DWORD *)(a2 + 16);
    }
  }
}
