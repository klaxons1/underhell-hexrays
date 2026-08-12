char __thiscall sub_10191780(float *this, float *a2)
{
  int v3; // esi
  long double v4; // st7
  bool v5; // cl
  float *v6; // ecx
  float *v8; // edx
  double v9; // st7
  float *v10; // ecx
  double v11; // st7
  int v12; // edx
  float v13; // [esp+4h] [ebp-24h]
  float v14; // [esp+8h] [ebp-20h]
  float v15; // [esp+10h] [ebp-18h]
  float v16; // [esp+14h] [ebp-14h]
  float v17; // [esp+1Ch] [ebp-Ch] BYREF
  float v18; // [esp+20h] [ebp-8h]
  float v19; // [esp+24h] [ebp-4h]

  v3 = (int)a2;
  v4 = this[1] - a2[1];
  v5 = 0;
  if ( fabs(v4) < 1.0 )
    v5 = fabs(this[4] - a2[4]) < 1.0;
  if ( (fabs(this[2] - a2[2]) >= 1.0 || fabs(this[5] - a2[5]) >= 1.0) && !v5 )
    return 0;
  v13 = this[1];
  v14 = this[2];
  v16 = this[5];
  v15 = this[4];
  if ( a2[1] < (double)v13 || a2[2] < (double)this[2] )
  {
    this[1] = a2[1];
    this[2] = *(float *)(v3 + 8);
    this[3] = *(float *)(v3 + 12);
  }
  if ( *(float *)(v3 + 16) > (double)this[4] || *(float *)(v3 + 20) > (double)this[5] )
  {
    this[4] = *(float *)(v3 + 16);
    this[5] = *(float *)(v3 + 20);
    this[6] = *(float *)(v3 + 24);
  }
  this[7] = (this[4] + this[1]) * 0.5;
  this[8] = (this[5] + this[2]) * 0.5;
  this[9] = 0.5 * (this[6] + this[3]);
  if ( v15 < (double)this[4] || v14 > (double)this[2] )
    v6 = (float *)v3;
  else
    v6 = this;
  v17 = this[4];
  v18 = this[2];
  v19 = 0.0;
  v9 = sub_1018AD70(v6, &v17);
  v8[13] = v9;
  if ( v13 > (double)v8[1] || v16 < (double)v8[5] )
    v10 = (float *)v3;
  else
    v10 = v8;
  v17 = v8[1];
  v18 = v8[5];
  v19 = 0.0;
  v11 = sub_1018AD70(v10, &v17);
  *(float *)(v12 + 56) = v11;
  sub_10190D50((char *)v12, v3);
  sub_10194AB0(&a2);
  sub_10190B20((int *)v3);
  sub_10184660(v3);
  return 1;
}
