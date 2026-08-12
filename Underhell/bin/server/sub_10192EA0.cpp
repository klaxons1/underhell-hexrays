bool __cdecl sub_10192EA0(float *a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st5
  double v5; // st6
  bool result; // al
  double v7; // st7
  double v8; // st5
  double v9; // st6
  float v10; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v3 = *a1 + *a2;
  v4 = a2[1] + a1[1];
  v5 = a2[2] + a1[2];
  v13 = v3 + *a3;
  v14 = v4 + a3[1];
  v15 = v5 + a3[2];
  v10 = v3 - *a3;
  v11 = v4 - a3[1];
  v12 = v5 - a3[2];
  for ( result = sub_10192DC0(COERCE_FLOAT(&savedregs), &v10, &v13);
        result;
        result = sub_10192DC0(COERCE_FLOAT(&savedregs), &v10, &v13) )
  {
    *a1 = *a1 + *a2;
    a1[1] = a2[1] + a1[1];
    a1[2] = a2[2] + a1[2];
    v7 = *a1 + *a2;
    v8 = a2[1] + a1[1];
    v9 = a2[2] + a1[2];
    v13 = v7 + *a3;
    v14 = v8 + a3[1];
    v15 = v9 + a3[2];
    v10 = v7 - *a3;
    v11 = v8 - a3[1];
    v12 = v9 - a3[2];
  }
  return result;
}
