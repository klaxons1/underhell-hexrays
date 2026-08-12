void __thiscall sub_100F8C50(float *this, float *a2, float *a3, float *a4)
{
  float v4; // edx
  float v6; // ecx
  float v7; // ecx
  float v8; // edx
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st5
  double v17; // st6
  double v18; // st7
  double v19; // st5
  double v20; // st4
  double v21; // rt2
  double v22; // st4
  double v23; // st3
  double v24; // st7
  double v25; // st3
  float v26; // [esp+0h] [ebp-58h]
  float v27[3]; // [esp+10h] [ebp-48h] BYREF
  float v28[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  float v29; // [esp+28h] [ebp-30h]
  float v30; // [esp+2Ch] [ebp-2Ch]
  float v31; // [esp+30h] [ebp-28h]
  float v32; // [esp+34h] [ebp-24h]
  float v33; // [esp+38h] [ebp-20h]
  float v34; // [esp+3Ch] [ebp-1Ch]
  float v35; // [esp+40h] [ebp-18h] BYREF
  float v36; // [esp+44h] [ebp-14h]
  float v37; // [esp+48h] [ebp-10h]
  float v38; // [esp+4Ch] [ebp-Ch]
  float v39; // [esp+50h] [ebp-8h]
  float v40; // [esp+54h] [ebp-4h]

  v4 = a2[2];
  v32 = *a2;
  v6 = a2[1];
  v29 = *a3;
  v33 = v6;
  v7 = a3[1];
  v34 = v4;
  v8 = a3[2];
  v30 = v7;
  v31 = v8;
  sub_104222B0(a3, &v35, 0, 0);
  if ( 0.0 != *(float *)(dword_106B31C8 + 16) )
  {
    v9 = v35 - this[282];
    v38 = v9;
    v10 = v36 - this[283];
    v39 = v10;
    v11 = v37 - this[284];
    v40 = v11;
    v26 = v9 * v9 + v10 * v10 + v11 * v11;
    v12 = off_10689708(v26);
    v13 = flt_10612900;
    if ( flt_10612900 >= v12 || v13 <= 0.0 )
      v14 = (float)5.0;
    else
      v14 = v12 / v13 * 5.0;
    v15 = v14 * *(float *)(dword_106B31C8 + 16);
    this[282] = v38 * v15 + this[282];
    this[283] = v39 * v15 + this[283];
    this[284] = v15 * v40 + this[284];
    off_10689714();
    v16 = v39 * -1.0;
    v17 = -1.0 * v40;
    *a2 = v38 * -1.0 * 5.0 + *a2;
    a2[1] = v16 * 5.0 + a2[1];
    a2[2] = 5.0 * v17 + a2[2];
  }
  sub_104222B0(a4, &v35, v28, v27);
  v18 = *a4;
  if ( v18 <= 180.0 )
  {
    if ( v18 < -180.0 )
      v18 = v18 + 360.0;
  }
  else
  {
    v18 = v18 - 360.0;
  }
  if ( 0.0 == flt_10612900 )
  {
    *a2 = v32;
    a2[1] = v33;
    a2[2] = v34;
    *a3 = v29;
    a3[1] = v30;
    a3[2] = v31;
  }
  v19 = v35 * (-0.035 * v18) + *a2;
  *a2 = v19;
  v20 = -0.035 * v18 * v36 + a2[1];
  a2[1] = v20;
  v21 = v20;
  v22 = -0.035 * v18 * v37 + a2[2];
  a2[2] = v22;
  v23 = v18;
  v24 = v18 * -0.029999999;
  v25 = v23 * -0.02;
  *a2 = v19 + v28[0] * v24 + v27[0] * v25;
  a2[1] = v21 + v28[1] * v24 + v27[1] * v25;
  a2[2] = v25 * v27[2] + v22 + v24 * v28[2];
}
