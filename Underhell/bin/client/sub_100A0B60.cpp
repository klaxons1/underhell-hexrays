long double __stdcall sub_100A0B60(float *a1, float *a2, float a3, float *a4)
{
  long double result; // st7

  if ( *a1 == flt_10459240 && a1[1] == *(float *)&qword_10459244 && a1[2] == *((float *)&qword_10459244 + 1)
    || *a2 == flt_10459240 && a2[1] == *(float *)&qword_10459244 && a2[2] == *((float *)&qword_10459244 + 1) )
  {
    return 1.0;
  }
  result = fabs(a1[1] * a2[1] + *a1 * *a2 + a1[2] * a2[2]) * a3;
  if ( a4 )
    *a4 = *a4 * result;
  return result;
}
