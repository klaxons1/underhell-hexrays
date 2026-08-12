void __cdecl sub_10142BC0(float a1, float *a2, float *a3)
{
  double v3; // st6
  double v4; // st5

  if ( *a2 == *a3 && a2[1] == a3[1] && a2[2] == a3[2] )
  {
    *a2 = *a3;
    a2[1] = a3[1];
    a2[2] = a3[2];
  }
  else
  {
    v3 = a3[1];
    v4 = a3[2];
    *a2 = *a2 + (*a3 - *a2) * a1;
    a2[1] = a2[1] + (v3 - a2[1]) * a1;
    a2[2] = a1 * (v4 - a2[2]) + a2[2];
  }
}
