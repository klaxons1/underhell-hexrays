char __thiscall sub_100609D0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // ecx
  int v10; // eax
  double v11; // st7
  int v12; // eax
  float v13; // [esp+0h] [ebp-18h] BYREF
  float v14; // [esp+4h] [ebp-14h]
  float v15; // [esp+8h] [ebp-10h]
  float v16[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this[316];
  if ( a2 != 1 && a2 != 2 || v3 < 2 )
    return 0;
  if ( a2 == 1 )
  {
    v5 = (float *)this[315];
    v13 = v5[6];
    v14 = v5[7];
    v15 = v5[8];
    v6 = v5[6] - v5[15];
    v7 = v5[7] - v5[16];
    v8 = v5[8] - v5[17];
  }
  else
  {
    v9 = this[315];
    v10 = 9 * v3;
    v11 = *(float *)(v9 + 4 * v10 - 12);
    v12 = v9 + 4 * v10;
    v13 = v11;
    v14 = *(float *)(v12 - 8);
    v15 = *(float *)(v12 - 4);
    v6 = *(float *)(v12 - 12) - *(float *)(v12 - 48);
    v7 = *(float *)(v12 - 8) - *(float *)(v12 - 44);
    v8 = *(float *)(v12 - 4) - *(float *)(v12 - 40);
  }
  v16[0] = v6;
  v16[1] = v7;
  v16[2] = v8;
  sub_101EDB90(v16, a3);
  sub_101EDA20(&v13, 3, a3);
  return 1;
}
