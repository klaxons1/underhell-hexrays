char __stdcall sub_100748D0(int a1, float a2, _DWORD *a3)
{
  if ( a2 >= (double)*(float *)(a1 + 40) )
  {
    *a3 = 0;
    return 1;
  }
  else
  {
    if ( a2 >= 0.1 )
    {
      *(float *)(a1 + 40) = a2;
      *a3 = 0;
    }
    else
    {
      *a3 = -4;
    }
    return 1;
  }
}
