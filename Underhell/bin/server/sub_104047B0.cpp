float *__thiscall sub_104047B0(int this, int a2, float *a3, float *a4)
{
  unsigned int v5; // eax
  float *result; // eax
  float *v8; // eax
  double v9; // st4
  double v10; // st6
  float *v11; // eax
  double v12; // st7
  float *v13; // eax
  double v14; // st6
  double v15; // st7
  float v16; // [esp+0h] [ebp-4Ch]
  float v17[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v18[6]; // [esp+1Ch] [ebp-30h] BYREF
  float v19; // [esp+34h] [ebp-18h]
  float v20; // [esp+38h] [ebp-14h]
  float v21; // [esp+3Ch] [ebp-10h]
  float v22; // [esp+40h] [ebp-Ch] BYREF
  float v23; // [esp+44h] [ebp-8h]
  float v24; // [esp+48h] [ebp-4h]
  float v25; // [esp+54h] [ebp+8h]
  float v26; // [esp+5Ch] [ebp+10h]

  *a4 = 0.125;
  v5 = *(_DWORD *)(a2 + 892);
  if ( v5 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a2 + 892) & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a2 + 892) & 0xFFF) + 1] )
  {
    result = sub_10404520(a2, v18);
    *a3 = *result;
    a3[1] = result[1];
    a3[2] = result[2];
  }
  else
  {
    sub_10404730(a2, &v22);
    v8 = sub_10404520(a2, v18);
    v19 = *v8 - v22;
    v20 = v8[1] - v23;
    v21 = v8[2] - v24;
    v26 = off_10689714();
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = *(float *)(this + 580) - v22;
    v10 = *(float *)(this + 588) - v24;
    v16 = v9 * v9 + (*(float *)(this + 584) - v23) * (*(float *)(this + 584) - v23) + v10 * v10;
    v25 = off_10689708(v16);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v11 = sub_10404520(a2, v18);
    v18[3] = *(float *)(this + 580) - *v11;
    v18[4] = *(float *)(this + 584) - v11[1];
    v18[5] = *(float *)(this + 588) - v11[2];
    v12 = off_10689714();
    if ( v26 > (double)v25 || v12 <= 512.0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v13 = sub_10404520(a2, v18);
      result = sub_1025F680(v17, &v22, v13, (float *)(this + 580), 0);
      *a3 = *result;
      a3[1] = result[1];
      a3[2] = result[2];
      v14 = 256.0 * v21;
      v15 = v20 * 256.0;
      *a3 = v19 * 256.0 + *a3;
      a3[1] = v15 + a3[1];
      a3[2] = v14 + a3[2];
    }
    else
    {
      result = sub_10404520(a2, v18);
      *a3 = *result;
      a3[1] = result[1];
      a3[2] = result[2];
    }
  }
  return result;
}
