float *__cdecl sub_10423A50(float *a1, float *a2, float *a3, float a4, float *a5)
{
  int v6[3]; // [esp+8h] [ebp-18h] BYREF
  int v7[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_10018D60(v7);
  sub_10018D60(v6);
  *(float *)v7 = *a2 - *a1;
  *(float *)&v7[1] = a2[1] - a1[1];
  *(float *)&v7[2] = a2[2] - a1[2];
  *(float *)v6 = *a3 - *a2;
  *(float *)&v6[1] = a3[1] - a2[1];
  *(float *)&v6[2] = a3[2] - a2[2];
  return sub_10423940(a2, a3, (float *)v7, (float *)v6, a4, a5);
}
