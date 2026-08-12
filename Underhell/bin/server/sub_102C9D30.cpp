int __thiscall sub_102C9D30(float *this, int a2)
{
  int result; // eax
  double v3; // st7

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v3 = *(float *)(a2 + 8);
    this[251] = *(float *)(a2 + 8);
    this[253] = v3 * v3;
  }
  else
  {
    this[251] = 0.0;
    this[253] = 0.0 * 0.0;
  }
  return result;
}
