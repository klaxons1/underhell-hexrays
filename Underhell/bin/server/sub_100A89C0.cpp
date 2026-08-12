char __thiscall sub_100A89C0(float *this, int a2, int a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5

  if ( 0.0 == *this )
    return 1;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v4 = *(float *)(a2 + 580) - *(float *)(a3 + 580);
  v5 = *(float *)(a2 + 584) - *(float *)(a3 + 584);
  v6 = *(float *)(a2 + 588) - *(float *)(a3 + 588);
  if ( v6 * v6 + v5 * v5 + v4 * v4 >= *this )
    return *((_BYTE *)this + 4) == 0;
  else
    return *((_BYTE *)this + 4) == 1;
}
