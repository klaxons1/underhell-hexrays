float *__thiscall sub_101F54F0(_DWORD *this, int a2, int a3)
{
  float *v4; // edi
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // rt0
  double v10; // st5
  double v11; // st4
  double v12; // st3
  double v13; // st2
  double v14; // rt1
  double v15; // st2
  float *result; // eax
  int v17; // [esp-28h] [ebp-6Ch]
  float v18; // [esp+8h] [ebp-3Ch] BYREF
  float v19; // [esp+Ch] [ebp-38h]
  float v20; // [esp+10h] [ebp-34h]
  float v21; // [esp+14h] [ebp-30h] BYREF
  float v22; // [esp+18h] [ebp-2Ch]
  float v23; // [esp+1Ch] [ebp-28h]
  float v24; // [esp+20h] [ebp-24h] BYREF
  float v25; // [esp+24h] [ebp-20h]
  float v26; // [esp+28h] [ebp-1Ch]
  float v27[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v28[3]; // [esp+38h] [ebp-Ch] BYREF
  int v29; // [esp+48h] [ebp+4h]

  v4 = (float *)this[3];
  if ( v4 )
  {
    sub_101ED7B0(v4, v27);
    sub_101EDA00((int)v4, 3, &v18);
    sub_101EE040(COERCE_FLOAT(v27), v28, &v21, &v24);
    v5 = a2 - this[4];
    this[4] = a2;
    v6 = (double)v5 * -0.2;
    v29 = a3 - this[5];
    v17 = this[3];
    v7 = v21 * v6;
    this[5] = a3;
    v21 = v7;
    v8 = v22 * v6;
    v22 = v8;
    v9 = v8;
    v10 = v6 * v23;
    v23 = v10;
    v11 = (double)v29 * 0.2;
    v12 = v24 * v11;
    v24 = v12;
    v13 = v25 * v11;
    v25 = v13;
    v14 = v13;
    v15 = v11 * v26;
    v26 = v15;
    v18 = v7 + v12 + v18;
    v19 = v9 + v14 + v19;
    v20 = v10 + v15 + v20;
    return sub_101EDA20(&v18, 3, v17);
  }
  return result;
}
