int __thiscall sub_10321480(float *this, int a2)
{
  int result; // eax
  double v3; // st7

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    v3 = (double)result;
  }
  else
  {
    v3 = (double)0;
  }
  this[2482] = v3;
  return result;
}
