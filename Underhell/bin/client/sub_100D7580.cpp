void __stdcall sub_100D7580(float *a1)
{
  double v1; // st7

  if ( *(float *)(dword_10432834 + 44) < (double)*a1 )
    *a1 = *(float *)(dword_10432834 + 44);
  v1 = -*(float *)(dword_1043287C + 44);
  if ( v1 > *a1 )
    *a1 = v1;
  if ( a1[2] > 50.0 )
    a1[2] = 50.0;
  if ( a1[2] < -50.0 )
    a1[2] = -50.0;
}
