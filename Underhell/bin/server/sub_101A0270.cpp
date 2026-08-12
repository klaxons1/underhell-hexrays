int __cdecl sub_101A0270(float *a1)
{
  int v1; // ecx

  v1 = dword_106B8C10;
  if ( !dword_106B8C10 )
    return 0;
  while ( fabs(*(float *)v1 - *a1) >= 11.25
       || fabs(*(float *)(v1 + 4) - a1[1]) >= 11.25
       || fabs(*(float *)(v1 + 8) - a1[2]) >= 11.25 )
  {
    v1 = *(_DWORD *)(v1 + 48);
    if ( !v1 )
      return 0;
  }
  return v1;
}
