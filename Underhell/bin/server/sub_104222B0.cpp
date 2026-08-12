float *__cdecl sub_104222B0(float a1, float *a2, float *a3, float *a4)
{
  float v4; // ecx
  double v5; // st7
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  float *v13; // eax
  double v14; // st3
  double v15; // st2
  double v16; // st4
  float *result; // eax
  double v18; // st4
  float v19; // [esp+0h] [ebp-20h] BYREF
  float v20; // [esp+4h] [ebp-1Ch] BYREF
  float v21; // [esp+8h] [ebp-18h] BYREF
  float v22; // [esp+Ch] [ebp-14h] BYREF
  float v23; // [esp+10h] [ebp-10h] BYREF
  float v24; // [esp+14h] [ebp-Ch]
  float *v25; // [esp+18h] [ebp-8h]
  float v26; // [esp+1Ch] [ebp-4h]

  v24 = COERCE_FLOAT(&v20);
  v4 = a1;
  v5 = *(float *)(LODWORD(a1) + 4) * 0.017453292;
  v25 = &v19;
  v26 = v5;
  v19 = cos(v26);
  v20 = sin(v26);
  v6 = *(float *)LODWORD(a1) * 0.017453292;
  v25 = &v21;
  v26 = COERCE_FLOAT(&a1);
  v24 = v6;
  v21 = cos(v24);
  a1 = sin(v24);
  v7 = *(float *)(LODWORD(v4) + 8) * 0.017453292;
  v25 = &v22;
  v26 = COERCE_FLOAT(&v23);
  v24 = v7;
  v22 = cos(v24);
  v23 = sin(v24);
  v8 = a2;
  v9 = v19;
  v10 = v20;
  v11 = v21;
  v12 = a1;
  if ( a2 )
  {
    *a2 = v11 * v9;
    v8[1] = v11 * v10;
    v8[2] = -v12;
  }
  v13 = a3;
  v14 = v22;
  v15 = v23;
  if ( a3 )
  {
    v16 = v12 * v15;
    *a3 = v14 * v10 - v16 * v9;
    v13[1] = v14 * v9 * -1.0 - v16 * v10;
    v13[2] = -1.0 * (v15 * v11);
    v12 = a1;
  }
  result = a4;
  if ( a4 )
  {
    v18 = v12 * v14;
    *a4 = v18 * v9 + v15 * v10;
    result[1] = v10 * v18 - v9 * v15;
    result[2] = v11 * v14;
  }
  return result;
}
