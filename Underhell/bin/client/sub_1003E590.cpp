long double __cdecl sub_1003E590(float a1, float a2, float a3)
{
  long double v3; // st7

  v3 = __FYL2X__(a1, 0.6931471805599453094) / a2 * a3 * 1.442695040888963407;
  _ST6 = v3;
  __asm { frndint }
  return __FSCALE__(__F2XM1__(v3 - _ST6) + 1.0, _ST6);
}
