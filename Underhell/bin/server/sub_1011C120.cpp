void __cdecl sub_1011C120(int a1, float a2, int a3, int a4, int a5, int a6, float a7)
{
  int v7; // [esp+10h] [ebp-18h] BYREF
  float v8; // [esp+14h] [ebp-14h]
  float v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-Ch] BYREF
  float v11; // [esp+20h] [ebp-8h]
  float v12; // [esp+24h] [ebp-4h]

  *(float *)&v10 = *(float *)a1 - a2;
  v11 = *(float *)(a1 + 4);
  v12 = *(float *)(a1 + 8);
  *(float *)&v7 = a2 + *(float *)a1;
  v8 = *(float *)(a1 + 4);
  v9 = *(float *)(a1 + 8);
  sub_1011BC50((float *)&v7, (float *)&v10, a3, a4, a5, a6, a7);
  v7 = *(int *)a1;
  v8 = *(float *)(a1 + 4) - a2;
  v9 = *(float *)(a1 + 8);
  v10 = *(int *)a1;
  v11 = a2 + *(float *)(a1 + 4);
  v12 = *(float *)(a1 + 8);
  sub_1011BC50((float *)&v10, (float *)&v7, a3, a4, a5, a6, a7);
  v7 = *(int *)a1;
  v8 = *(float *)(a1 + 4);
  v9 = *(float *)(a1 + 8) - a2;
  v10 = *(int *)a1;
  v11 = *(float *)(a1 + 4);
  v12 = a2 + *(float *)(a1 + 8);
  sub_1011BC50((float *)&v10, (float *)&v7, a3, a4, a5, a6, a7);
}
