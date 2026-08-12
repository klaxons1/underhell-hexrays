void __thiscall sub_1035D590(int this, float *a2)
{
  double v3; // st7
  double v4; // st4
  double v5; // st5
  double v6; // st7
  float v7; // [esp+0h] [ebp-Ch]

  v3 = *(float *)(this + 716) - a2[179];
  v4 = *(float *)(this + 720) - a2[180];
  v5 = *(float *)(this + 724) - a2[181];
  v7 = v5 * v5 + v4 * v4 + v3 * v3;
  v6 = off_10689708(v7);
  *(float *)(this + 3636) = v6;
  if ( v6 < 512.0 )
    sub_10023CB0((char *)this, 74);
  if ( *(float *)(this + 3636) < 1024.0 )
    sub_10023CB0((char *)this, 73);
  sub_1002C160((_DWORD *)this, 1024.0, a2);
}
