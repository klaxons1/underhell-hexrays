void __thiscall sub_1002C910(unsigned __int8 *this, int a2, float *a3, float *a4, float a5, float a6)
{
  double v6; // st7
  int v7; // edx
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  int v11; // eax
  float *v12; // edx

  if ( fabs(*a3 - *a4) < 0.001 || a5 <= (double)*a4 )
  {
    v11 = 0;
    if ( this[29] )
    {
      v12 = a4 + 1;
      do
      {
        ++v11;
        *(float *)(a2 + 4 * v11 - 4) = *v12++;
      }
      while ( v11 < this[29] );
    }
  }
  else
  {
    v6 = a5 - *a4;
    if ( a6 <= v6 )
      v6 = a6;
    v7 = 0;
    if ( this[29] )
    {
      v8 = a3 + 1;
      v9 = v6 * (1.0 / (*a4 - *a3)) + 1.0;
      do
      {
        ++v7;
        v10 = *(float *)((char *)v8 + (char *)a4 - (char *)a3) - *v8;
        *(float *)(a2 + 4 * v7 - 4) = v10 * v9 + *v8++;
      }
      while ( v7 < this[29] );
    }
  }
}
