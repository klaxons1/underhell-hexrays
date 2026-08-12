void __thiscall sub_101505F0(int this, int a2)
{
  double v3; // st7
  int v4; // eax
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v4 = *(_DWORD *)(this + 252);
  *(float *)(this + 108) = v3;
  if ( (v4 & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = *(float *)(this + 884) - *(float *)(this + 580);
  v6 = v5 * v5;
  v7 = *(float *)(this + 888) - *(float *)(this + 584);
  v8 = *(float *)(this + 892) - *(float *)(this + 588);
  if ( v8 * v8 + v7 * v7 + v6 > 1.4210855e-14 )
    sub_10246AC0(this + 884, *(float *)(this + 108));
}
