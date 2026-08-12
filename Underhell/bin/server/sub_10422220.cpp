float *__cdecl sub_10422220(float *a1, float *a2)
{
  double v2; // st7
  float *result; // eax
  float v4; // [esp+0h] [ebp-18h] BYREF
  float v5; // [esp+4h] [ebp-14h] BYREF
  float v6; // [esp+8h] [ebp-10h]
  float v7; // [esp+Ch] [ebp-Ch]
  float *v8; // [esp+10h] [ebp-8h]
  float v9; // [esp+14h] [ebp-4h]
  float v10; // [esp+1Ch] [ebp+4h]

  v7 = COERCE_FLOAT(&v5);
  v2 = a1[1] * 0.017453292;
  v8 = &v4;
  v9 = v2;
  v4 = cos(v9);
  v5 = sin(v9);
  v7 = *a1 * 0.017453292;
  v10 = cos(v7);
  v6 = sin(v7);
  result = a2;
  *a2 = v4 * v10;
  a2[1] = v10 * v5;
  a2[2] = -v6;
  return result;
}
