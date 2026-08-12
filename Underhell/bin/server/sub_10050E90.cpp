bool __thiscall sub_10050E90(float *this, int a2)
{
  double v3; // st6
  double v4; // st5
  float v6; // [esp+0h] [ebp-Ch]

  if ( -1.0 == this[3] || !a2 )
    return 0;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v3 = this[1] - *(float *)(a2 + 584);
  v4 = *this - *(float *)(a2 + 580);
  v6 = v4 * v4 + v3 * v3;
  return off_10689708(v6) > this[3];
}
