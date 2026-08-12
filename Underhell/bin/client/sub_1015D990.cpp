double __stdcall sub_1015D990(int a1, float a2)
{
  double v2; // st7

  *(float *)(a1 + 36) = a2 * *(float *)(a1 + 56) + *(float *)(a1 + 36);
  v2 = a2 * -1.3862944 * 1.442695040888963407;
  _ST6 = v2;
  __asm { frndint }
  *(float *)(a1 + 56) = __FSCALE__(__F2XM1__(v2 - _ST6) + 1.0, _ST6) * *(float *)(a1 + 56);
  return *(float *)(a1 + 36);
}
