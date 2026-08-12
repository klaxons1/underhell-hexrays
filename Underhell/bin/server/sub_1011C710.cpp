void __cdecl sub_1011C710(float *a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8, int a9, float a10)
{
  int v10[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v11[3]; // [esp+28h] [ebp-Ch] BYREF

  sub_102650F0((int)v11, a2);
  *(float *)v10 = *(float *)v11 * a3 + *a1;
  *(float *)&v10[1] = *(float *)&v11[1] * a3 + a1[1];
  *(float *)&v10[2] = a3 * *(float *)&v11[2] + a1[2];
  sub_1011C3A0(a1, (float *)v10, a4, a5, a6, a7, a8, a9, a10);
}
