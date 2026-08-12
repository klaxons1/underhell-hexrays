int __cdecl sub_10421FD0(float *a1)
{
  int v1; // ecx

  v1 = *a1 < 0.0;
  if ( a1[1] < 0.0 )
    v1 |= 2u;
  if ( a1[2] < 0.0 )
    return v1 | 4;
  return v1;
}
