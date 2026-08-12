int __thiscall sub_10061770(int *this, int a2, float a3)
{
  int v4; // edx
  int v5; // esi
  double v6; // st7
  int *v7; // ecx
  float *i; // edi
  int v10; // esi
  double v11; // st6
  double v12; // rt0
  float *v13; // eax
  int v14; // esi
  double v15; // st5
  double v16; // st4
  double v17; // st6
  double v18; // st7
  float v19[14]; // [esp+8h] [ebp-38h] BYREF

  memset(v19, 0, sizeof(v19));
  v4 = a2;
  v5 = this[32] - 1;
  if ( a2 >= v5 )
    return 0;
  v6 = a3;
  v7 = this + 29;
  for ( i = (float *)(this[29] + 56 * a2); v6 > *i; i += 14 )
  {
    v6 = v6 - *i;
    if ( ++v4 >= v5 )
      return 0;
  }
  v10 = *v7;
  v11 = v6 / *(float *)(*v7 + 56 * v4);
  v19[0] = *(float *)(*v7 + 56 * v4) - v6;
  v12 = v11;
  *(float *)(v10 + 56 * v4) = v6;
  v13 = (float *)(*v7 + 56 * v4);
  v14 = v4 + 1;
  v19[1] = (1.0 - v12) * v13[1] + v13[15] * v12;
  v15 = v13[25] * v11 + (1.0 - v11) * v13[11];
  v16 = (1.0 - v11) * v13[13];
  v17 = v13[26] * v11 + v13[12] * (1.0 - v11);
  v18 = v12 * v13[27] + v16;
  v19[11] = v15;
  v19[12] = v17;
  v19[13] = v18;
  sub_100616E0(v7, v4 + 1, v19);
  return v14;
}
