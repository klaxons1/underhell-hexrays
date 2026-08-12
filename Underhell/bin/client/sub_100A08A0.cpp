double __stdcall sub_100A08A0(int a1)
{
  double result; // st7

  result = 1.0 - *(float *)(a1 + 44) / *(float *)(a1 + 40);
  if ( result < 0.75 )
    return result * result;
  return result;
}
