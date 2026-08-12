int __cdecl sub_10079C80(int *a1)
{
  int result; // eax
  double v2; // st7

  result = *a1;
  if ( *a1 > 1 )
  {
    v2 = atof((const char *)a1[259]);
    if ( v2 >= 0.0 && v2 < 1.0 )
      flt_1060857C = v2;
    return Msg("Epsilon now %f\n", flt_1060857C);
  }
  return result;
}
