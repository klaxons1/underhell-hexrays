float *__cdecl sub_10422400(float a1, float *a2, float *a3, float *a4)
{
  float *v4; // ecx
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  float *v9; // eax
  double v10; // st6
  double v11; // st5
  double v12; // st4
  double v13; // st3
  double v14; // st2
  float *v15; // eax
  float *result; // eax
  float v17; // [esp+0h] [ebp-20h] BYREF
  float v18; // [esp+4h] [ebp-1Ch] BYREF
  float v19; // [esp+8h] [ebp-18h] BYREF
  float v20; // [esp+Ch] [ebp-14h] BYREF
  float v21; // [esp+10h] [ebp-10h] BYREF
  float v22; // [esp+14h] [ebp-Ch]
  float *v23; // [esp+18h] [ebp-8h]
  float v24; // [esp+1Ch] [ebp-4h]

  v22 = COERCE_FLOAT(&v17);
  v4 = (float *)LODWORD(a1);
  v5 = *(float *)(LODWORD(a1) + 4) * 0.017453292;
  v23 = &a1;
  v24 = v5;
  a1 = cos(v24);
  v17 = sin(v24);
  v6 = *v4 * 0.017453292;
  v23 = &v18;
  v24 = COERCE_FLOAT(&v19);
  v22 = v6;
  v18 = cos(v22);
  v19 = sin(v22);
  v7 = v4[2] * 0.017453292;
  v23 = &v20;
  v24 = COERCE_FLOAT(&v21);
  v22 = v7;
  v20 = cos(v22);
  v21 = sin(v22);
  v8 = a1;
  v9 = a2;
  v10 = v17;
  v11 = v18;
  v12 = v19;
  v13 = v20;
  v14 = v21;
  if ( a2 )
  {
    *a2 = v11 * v8;
    v9[1] = v14 * v12 * v8 - v13 * v10;
    v9[2] = v13 * v12 * v8 + v14 * v10;
  }
  v15 = a3;
  if ( a3 )
  {
    *a3 = v11 * v10;
    v15[1] = v14 * v12 * v10 + v13 * v8;
    v15[2] = v10 * (v13 * v12) - v8 * v14;
  }
  result = a4;
  if ( a4 )
  {
    *a4 = -v12;
    result[1] = v14 * v11;
    result[2] = v11 * v13;
  }
  return result;
}
