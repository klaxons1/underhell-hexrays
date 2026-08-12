int __thiscall sub_101B0B10(float *this, int a2)
{
  double v3; // st7
  int result; // eax
  double v5; // st7

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  this[254] = v3;
  result = Msg("Setting hinge friction to %f\n", v3);
  v5 = this[254] * 1000.0;
  this[244] = 0.0;
  this[245] = 0.0;
  this[246] = 0.0;
  this[247] = v5;
  return result;
}
