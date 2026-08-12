int *__cdecl sub_101EE800(int *a1, float a2, int a3)
{
  float *v4; // esi
  int *result; // eax
  double v6; // st7
  float v7; // [esp+14h] [ebp-10h]
  int v8[3]; // [esp+18h] [ebp-Ch] BYREF
  float v9; // [esp+28h] [ebp+4h]

  v4 = (float *)a3;
  if ( a1 == (int *)a3 )
  {
    v8[0] = *a1;
    v8[1] = a1[1];
    v8[2] = a1[2];
    return (int *)sub_101EE800((int)v8, a2, a3);
  }
  else
  {
    v7 = a2 * 0.017453292;
    result = &a3;
    v9 = cos(v7);
    *(float *)&a3 = sin(v7);
    v6 = *(float *)&a3;
    *v4 = *(float *)a1 * v9 - *((float *)a1 + 1) * *(float *)&a3;
    v4[1] = v6 * *(float *)a1 + v9 * *((float *)a1 + 1);
    v4[2] = *((float *)a1 + 2);
  }
  return result;
}
