int __thiscall sub_10234E40(float *this)
{
  int v2; // eax
  double v4; // [esp+10h] [ebp-Ch]
  char v5; // [esp+18h] [ebp-4h]
  float v6; // [esp+18h] [ebp-4h]

  v5 = Plat_IsInBenchmarkMode();
  Plat_SetBenchmarkMode(0);
  v4 = Plat_FloatTime();
  Plat_SetBenchmarkMode(v5);
  v6 = v4 - this[2];
  Warning("------------------ SERVER BENCHMARK RESULTS ------------------\n");
  Warning("Total time          : %.2f seconds\n", v6);
  Warning("Num ticks simulated : %d\n", *(_DWORD *)(dword_106C478C + 48));
  Warning("Ticks per second    : %.2f\n", (double)*(int *)(dword_106C478C + 48) / v6);
  v2 = sub_10234DB0();
  Warning("Benchmark CRC       : %d\n", v2);
  return Warning("--------------------------------------------------------------\n");
}
