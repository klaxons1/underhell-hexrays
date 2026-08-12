void __cdecl sub_101A0AD0(int a1, int a2, int a3, int a4, int a5, int a6, float a7)
{
  int v7[3]; // [esp+4h] [ebp-18h] BYREF
  int v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v8[0] = *(int *)a2;
  v8[1] = *(int *)(a2 + 4);
  *(float *)&v8[2] = *(float *)(a2 + 8) + 0.1;
  v7[0] = *(int *)a1;
  v7[1] = *(int *)(a1 + 4);
  *(float *)&v7[2] = *(float *)(a1 + 8) + 0.1;
  sub_1011BC50((float *)v7, (float *)v8, a3, a4, a5, a6, a7);
}
