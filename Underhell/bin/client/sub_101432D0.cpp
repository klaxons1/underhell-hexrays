void __thiscall sub_101432D0(float *this, int a2, float *a3, float *a4, char a5)
{
  long double v5; // st7
  long double v6; // st6

  if ( a5 )
  {
    *a3 = *(float *)(a2 + 16);
    v5 = this[15] - *(float *)(a2 + 16);
    v6 = *(float *)(dword_1043C7D4 + 44);
    *a4 = 0.0;
    if ( fabs(v5) < v6 )
    {
      if ( v5 <= 0.0 )
        *a3 = v6 + this[15];
      else
        *a3 = this[15] - v6;
      *a4 = *a3 - *(float *)(a2 + 16);
    }
  }
  else
  {
    *a3 = *(float *)(a2 + 16);
    *a4 = 0.0;
  }
}
