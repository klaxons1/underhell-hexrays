char __cdecl sub_10113300(float *a1, float *a2, float *a3, float a4, float *a5, float *a6)
{
  if ( !sub_10113200(a1, a2, a3, a4, a5, a6) || *a5 > 1.0 || *a6 < 0.0 )
    return 0;
  if ( *a5 < 0.0 )
    *a5 = 0.0;
  if ( *a6 > 1.0 )
    *a6 = 1.0;
  return 1;
}
