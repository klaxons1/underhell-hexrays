void __thiscall sub_10234D20(int this)
{
  double v2; // st7

  v2 = Plat_FloatTime();
  if ( v2 - *(float *)(this + 16) > 3.0 )
  {
    *(float *)(this + 16) = v2;
    Msg(
      "Benchmark: %d%% complete.\n",
      100 * (*(_DWORD *)(dword_106B31C8 + 24) - *(_DWORD *)(this + 24)) / *(_DWORD *)(dword_106C478C + 48));
  }
}
