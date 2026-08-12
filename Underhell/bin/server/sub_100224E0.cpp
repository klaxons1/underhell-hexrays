char __stdcall sub_100224E0(int a1, int a2, float a3, _DWORD *a4)
{
  int v5; // eax

  if ( a3 > (double)*(float *)(a1 + 40) )
    return 0;
  v5 = *(_DWORD *)(a2 + 800);
  if ( v5 != 1 && v5 != 3 )
    return 0;
  if ( a3 >= 0.1 )
  {
    *(float *)(a1 + 40) = a3;
    *a4 = 0;
  }
  else
  {
    *a4 = -1;
  }
  return 1;
}
