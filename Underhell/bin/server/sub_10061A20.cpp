int __thiscall sub_10061A20(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ebx
  long double v6; // st7
  int v7; // edx
  long double v8; // st7
  int v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v15; // st5
  float v16; // [esp+0h] [ebp-28h]
  float v17; // [esp+4h] [ebp-24h]
  float v18[3]; // [esp+14h] [ebp-14h] BYREF
  float v19; // [esp+20h] [ebp-8h]
  float v20; // [esp+24h] [ebp-4h]
  float v21; // [esp+34h] [ebp+Ch]

  v4 = this[29];
  v5 = 56 * a3;
  v18[0] = *(float *)(56 * a3 + v4 + 44) - *(float *)(v4 + 56 * a2 + 44);
  v18[1] = *(float *)(56 * a3 + v4 + 48) - *(float *)(v4 + 56 * a2 + 48);
  v18[2] = *(float *)(56 * a3 + v4 + 52) - *(float *)(v4 + 56 * a2 + 52);
  v6 = sub_10265030(v18);
  v21 = v6;
  v16 = v6;
  sub_10424C10(v16, *(float *)(56 * a2 + this[29] + 16));
  v7 = this[29];
  v20 = fabs(v6) * 0.0066666668;
  v8 = *(float *)(v5 + v7 + 16);
  sub_10424C10(*(float *)(v5 + v7 + 16), v21);
  v9 = this[29];
  v10 = fabs(v8) * 0.0066666668;
  v19 = v10;
  v11 = *(float *)(v9 + v5 + 4) - *(float *)(v9 + 56 * a2 + 4);
  v12 = v20;
  if ( v20 < 0.01 )
  {
    if ( 0.8 * v11 >= v10 )
    {
      *(float *)(56 * a2 + this[29] + 16) = v21;
      v13 = v11 - v10;
LABEL_4:
      v17 = v13;
      *(float *)(this[29] + 56 * sub_10061770(this, a2, v17) + 16) = v21;
      return 1;
    }
    return 0;
  }
  if ( v10 < 0.01 )
  {
    v13 = v20;
    if ( v11 * 0.8 >= v12 )
      goto LABEL_4;
    return 0;
  }
  v15 = v10 + v12;
  if ( v15 > v11 )
    return 0;
  if ( v11 * 0.8 <= v15 )
    return 0;
  *(float *)(this[29] + 56 * sub_10061770(this, a2, v20) + 16) = v21;
  *(float *)(this[29] + 56 * sub_10061770(this, a2, v19) + 16) = v21;
  return 2;
}
