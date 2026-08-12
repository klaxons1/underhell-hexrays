int __cdecl sub_10076A00(int a1, int a2, int a3, float a4)
{
  int v5[4]; // [esp+8h] [ebp-30h] BYREF
  int v6[4]; // [esp+18h] [ebp-20h] BYREF
  int v7[4]; // [esp+28h] [ebp-10h] BYREF

  sub_101EF050(a1, v6);
  sub_101EF050(a2, v7);
  sub_101F0F00((int)v6, (int)v7, a4, (int)v5);
  return sub_101F0F70(v5, a3);
}
