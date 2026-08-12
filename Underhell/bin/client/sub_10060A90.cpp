char __thiscall sub_10060A90(_DWORD *this, int a2, float *a3, int a4)
{
  int v4; // eax
  float *v5; // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  int v10; // edx
  int v11; // eax
  double v12; // st7
  int v13; // edx
  int v14; // ecx
  double v15; // st7
  int v16; // eax
  float v18[3]; // [esp+0h] [ebp-Ch] BYREF

  v4 = this[316];
  if ( a2 != 1 && a2 != 2 || v4 < 2 )
    return 0;
  if ( a2 == 1 )
  {
    v5 = (float *)this[315];
    *a3 = v5[6];
    a3[1] = v5[7];
    a3[2] = v5[8];
    v6 = (float *)this[315];
    v7 = v6[6] - v6[15];
    v8 = v6[7] - v6[16];
    v9 = v6[8] - v6[17];
  }
  else
  {
    v10 = this[315];
    v11 = 36 * v4;
    v12 = *(float *)(v10 + v11 - 12);
    v13 = v10 + v11 - 12;
    *a3 = v12;
    a3[1] = *(float *)(v13 + 4);
    a3[2] = *(float *)(v13 + 8);
    v14 = this[315];
    v15 = *(float *)(v11 + v14 - 12);
    v16 = v14 + v11;
    v7 = v15 - *(float *)(v16 - 48);
    v8 = *(float *)(v16 - 8) - *(float *)(v16 - 44);
    v9 = *(float *)(v16 - 4) - *(float *)(v16 - 40);
  }
  v18[0] = v7;
  v18[1] = v8;
  v18[2] = v9;
  sub_101EE190(v18, a4);
  return 1;
}
