int __cdecl sub_10265130(const char *a1, int a2, int a3, int a4)
{
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  v5 = a4;
  v6 = dword_1060F30C;
  sub_1042CDD0(&a4);
  sub_1042CDF0(&a4, &v6, 4);
  sub_1042CDF0(&a4, &v5, 4);
  sub_1042CDF0(&a4, a1, strlen(a1));
  sub_1042CDE0(&a4);
  RandomSeed(a4);
  return RandomInt(a2, a3);
}
