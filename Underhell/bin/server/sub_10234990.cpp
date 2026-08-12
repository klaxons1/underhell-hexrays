double sub_10234990()
{
  double v1; // [esp+4h] [ebp-Ch]
  char v2; // [esp+Ch] [ebp-4h]

  v2 = Plat_IsInBenchmarkMode();
  Plat_SetBenchmarkMode(0);
  v1 = Plat_FloatTime();
  Plat_SetBenchmarkMode(v2);
  return v1;
}
