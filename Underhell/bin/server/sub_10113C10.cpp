char __cdecl sub_10113C10(int a1, float *a2, float *a3, float a4, float *a5, float *a6)
{
  char result; // al
  int v7[3]; // [esp+14h] [ebp-18h] BYREF
  int v8[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 64) )
    return sub_10113A30((float *)a1, (float *)(a1 + 16), (int)a2, (int)a3, a4, (int)a5, a6);
  *(float *)v7 = *a2 - *(float *)(a1 + 48);
  *(float *)&v7[1] = a2[1] - *(float *)(a1 + 52);
  *(float *)&v7[2] = a2[2] - *(float *)(a1 + 56);
  *(float *)v8 = *a3 + *(float *)(a1 + 48);
  *(float *)&v8[1] = a3[1] + *(float *)(a1 + 52);
  *(float *)&v8[2] = a3[2] + *(float *)(a1 + 56);
  result = sub_10113A30((float *)a1, (float *)(a1 + 16), (int)v7, (int)v8, a4, (int)a5, a6);
  *a5 = *a5 + *(float *)(a1 + 32);
  a5[1] = a5[1] + *(float *)(a1 + 36);
  a5[2] = a5[2] + *(float *)(a1 + 40);
  a5[3] = a5[3] + *(float *)(a1 + 32);
  a5[4] = a5[4] + *(float *)(a1 + 36);
  a5[5] = a5[5] + *(float *)(a1 + 40);
  return result;
}
