void __thiscall sub_101DCC80(int this)
{
  double v2; // st4
  double v3; // st7
  double v4; // st4
  double v5; // st5
  float v6; // [esp+0h] [ebp-8h]

  sub_10112C00(this + 320, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 832) = *(float *)(this + 580);
  *(float *)(this + 836) = *(float *)(this + 584);
  *(float *)(this + 840) = *(float *)(this + 588);
  if ( *(float *)(this + 812) <= 0.0 )
  {
    v2 = *(float *)(this + 844) - *(float *)(this + 832);
    v3 = v2 * v2;
    v4 = *(float *)(this + 848) - *(float *)(this + 836);
    v5 = *(float *)(this + 852) - *(float *)(this + 840);
    v6 = v5 * v5 + v4 * v4 + v3;
    *(float *)(this + 812) = off_10689708(v6);
  }
}
