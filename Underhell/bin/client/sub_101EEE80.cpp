void __cdecl sub_101EEE80(float *a1, float *a2, float *a3)
{
  long double v3; // st7
  long double v4; // st7

  v3 = acos(a1[3]);
  v4 = (v3 + v3) * 57.29578;
  *a3 = v4;
  if ( v4 > 180.0 )
    *a3 = v4 - 360.0;
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  off_103EDFEC(a2);
}
