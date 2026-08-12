double __cdecl sub_100FF5A0(int a1, int a2, float a3, _DWORD *a4, float *a5)
{
  double result; // st7
  double v6; // st6
  double v7; // st3
  double v8; // st7
  double v9; // st6

  result = 1.0;
  if ( *(float *)(a1 + 88) <= 1.0 )
  {
    v6 = a3;
  }
  else
  {
    v6 = a3;
    if ( a3 < (double)*(float *)(a1 + 76) )
      v6 = v6 + 1.0;
  }
  v7 = (v6 - *(float *)(a1 + 76)) * (double)(*(_DWORD *)(a2 + 16) - 1) + (double)*(int *)(a1 + 68);
  *a5 = v7;
  *a4 = (int)v7;
  *a5 = *a5 - (double)(int)v7;
  if ( *(float *)(a1 + 76) > v6 )
  {
    *a4 = *(_DWORD *)(a1 + 68);
    result = 0.0;
    *a5 = 0.0;
    return result;
  }
  if ( *(float *)(a1 + 80) <= v6 )
  {
    if ( *(float *)(a1 + 84) > v6 )
      return result;
    if ( *(float *)(a1 + 88) <= v6 )
    {
      v8 = 0.0;
      v9 = (*(float *)(a1 + 88) - *(float *)(a1 + 76)) * (double)(*(_DWORD *)(a2 + 16) - 1) + (double)*(int *)(a1 + 68);
      *a5 = v9;
      *a4 = (int)v9;
      *a5 = *a5 - (double)(int)v9;
    }
    else
    {
      v8 = 1.0 - (v6 - *(float *)(a1 + 84)) / (*(float *)(a1 + 88) - *(float *)(a1 + 84));
    }
  }
  else
  {
    v8 = (v6 - *(float *)(a1 + 76)) / (*(float *)(a1 + 80) - *(float *)(a1 + 76));
  }
  return 3.0 * (v8 * v8) - v8 * (v8 * v8 + v8 * v8);
}
