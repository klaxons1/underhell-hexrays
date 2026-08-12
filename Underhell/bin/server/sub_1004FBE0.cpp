bool __thiscall sub_1004FBE0(float *this, int a2)
{
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  float v8; // [esp+0h] [ebp-Ch]

  if ( -1.0 == this[3] || !a2 )
    return 0;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v3 = *this - *(float *)(a2 + 580);
  v4 = v3 * v3;
  v5 = this[1] - *(float *)(a2 + 584);
  v6 = this[2] - *(float *)(a2 + 588);
  v8 = v6 * v6 + v5 * v5 + v4;
  return off_10689708(v8) > this[3];
}
