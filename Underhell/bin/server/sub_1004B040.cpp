bool __thiscall sub_1004B040(int this, float *a2, int a3, int a4)
{
  int v5; // eax
  double v6; // st6
  double v7; // st5

  v5 = *(_DWORD *)(this + 2808);
  if ( !v5 || a4 && *(_DWORD *)(a4 + 824) == v5 )
    return 1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = a2[1] - *(float *)(this + 584);
  v7 = *a2 - *(float *)(this + 580);
  return v7 * v7 + v6 * v6 <= 1.0;
}
