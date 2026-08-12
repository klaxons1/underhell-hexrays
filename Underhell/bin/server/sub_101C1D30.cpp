int __stdcall sub_101C1D30(int a1, float a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st6
  float v6; // ecx
  float v7; // edx
  double v8; // st5
  double v9; // rt0
  float v11; // [esp+0h] [ebp-Ch] BYREF
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+8h] [ebp-4h]

  v3 = a2 * *(float *)(a1 + 492);
  v4 = a2 * *(float *)(a1 + 496);
  a3[27] = a2 * *(float *)(a1 + 488);
  a3[28] = v3;
  a3[29] = v4;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  *a3 = *(float *)(a1 + 580);
  a3[1] = *(float *)(a1 + 584);
  a3[2] = *(float *)(a1 + 588);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10421CC0(a1 + 500, a3 + 3);
  v5 = a2 * *(float *)(a1 + 488);
  v6 = *(float *)(a1 + 732);
  v7 = *(float *)(a1 + 736);
  v8 = a2 * *(float *)(a1 + 492);
  v11 = *(float *)(a1 + 728);
  v12 = v6;
  v9 = a2 * *(float *)(a1 + 496);
  v11 = v5 + v11;
  v12 = v8 + v6;
  v13 = v9 + v7;
  sub_100E11A0(a1, &v11);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  return sub_10421CC0(a1 + 500, a3 + 15);
}
