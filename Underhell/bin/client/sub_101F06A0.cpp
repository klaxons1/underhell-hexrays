void __cdecl sub_101F06A0(float *a1, float *a2, float *a3, float *a4)
{
  float v4[4]; // [esp+8h] [ebp-40h] BYREF
  int v5[4]; // [esp+18h] [ebp-30h] BYREF
  int v6[4]; // [esp+28h] [ebp-20h] BYREF
  float v7[4]; // [esp+38h] [ebp-10h] BYREF

  sub_101EF050(a1, (float *)v5);
  sub_101EF050(a2, v7);
  sub_101EEBE0((float *)v5, -1.0, (float *)v6);
  sub_101EECB0(v7, (float *)v6, v4);
  sub_101EEB80(v4);
  sub_101EEE80(v4, a3, a4);
}
