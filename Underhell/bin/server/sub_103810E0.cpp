char __thiscall sub_103810E0(int this, int a2)
{
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  double v7; // st7
  int v9; // edx
  int v10; // eax
  float v11; // edx
  float v12; // eax
  float v13; // [esp+0h] [ebp-78h]
  _BYTE v14[44]; // [esp+Ch] [ebp-6Ch] BYREF
  float v15; // [esp+38h] [ebp-40h]
  float v16[3]; // [esp+60h] [ebp-18h] BYREF
  float v17[2]; // [esp+6Ch] [ebp-Ch] BYREF
  float v18; // [esp+74h] [ebp-4h]
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(float *)(this + 580) - *(float *)(a2 + 580);
  v4 = v3 * v3;
  v5 = *(float *)(this + 584) - *(float *)(a2 + 584);
  v6 = *(float *)(this + 588) - *(float *)(a2 + 588);
  v13 = v6 * v6 + v5 * v5 + v4;
  v7 = off_10689708(v13);
  if ( v7 < *(float *)(this + 3684) )
    return 0;
  if ( v7 <= *(float *)(this + 3688) )
  {
    if ( (*(_DWORD *)(this + 248) & 0x10000) == 0 )
      return 1;
    v9 = *(_DWORD *)(this + 252) >> 11;
    v18 = *(float *)(this + 3648) * 0.2;
    if ( (v9 & 1) != 0 )
      sub_100DAE60(this);
    v10 = *(_DWORD *)(a2 + 252);
    v16[0] = *(float *)(this + 580);
    v16[1] = *(float *)(this + 584);
    v16[2] = *(float *)(this + 588) + v18;
    if ( (v10 & 0x800) != 0 )
      sub_100DAE60(a2);
    v11 = *(float *)(a2 + 584);
    v12 = *(float *)(a2 + 588);
    v17[0] = *(float *)(a2 + 580);
    v17[1] = v11;
    v18 = v12;
    sub_1002A5F0((int)&savedregs, this, v16, v17, 1174421507, a2, 0, (int)v14);
    if ( 1.0 == v15 )
      return 1;
  }
  return 0;
}
