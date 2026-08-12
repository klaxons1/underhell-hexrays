float *__stdcall sub_101C1E50(int a1, float a2, float *a3)
{
  double v3; // st6
  float v4; // ecx
  float v5; // edx
  double v6; // st5
  double v7; // st4
  float *result; // eax
  double v9; // st5
  double v10; // st4
  float v11[3]; // [esp+0h] [ebp-Ch] BYREF

  v3 = a2 * *(float *)(a1 + 592);
  v4 = *(float *)(a1 + 720);
  v5 = *(float *)(a1 + 724);
  v6 = *(float *)(a1 + 596) * a2;
  v7 = *(float *)(a1 + 600);
  v11[0] = *(float *)(a1 + 716);
  v11[0] = v3 + v11[0];
  v11[1] = v6 + v4;
  v11[2] = a2 * v7 + v5;
  sub_100E10C0(a1, v11);
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  result = a3;
  v9 = *(float *)(a1 + 480) * a2;
  v10 = *(float *)(a1 + 484);
  *a3 = *(float *)(a1 + 476) * a2;
  a3[1] = v9;
  a3[2] = a2 * v10;
  return result;
}
