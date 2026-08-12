void __thiscall sub_10350900(int this, float *a2)
{
  double v3; // st6
  double v4; // st5
  float v5; // [esp+0h] [ebp-8h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(float *)(this + 584) - a2[1];
  v4 = *(float *)(this + 580) - *a2;
  v5 = v4 * v4 + v3 * v3;
  off_10689708(v5);
}
