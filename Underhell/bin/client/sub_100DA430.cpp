double __cdecl sub_100DA430(float *a1)
{
  double result; // st7
  float v3; // [esp+10h] [ebp+8h]

  result = *a1;
  v3 = *a1;
  if ( 0.0 != a1[1] )
    return ((double (__cdecl *)(_DWORD, _DWORD))RandomFloat)(0.0, a1[1]) + v3;
  return result;
}
