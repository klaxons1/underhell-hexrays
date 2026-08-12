void __thiscall sub_10090DA0(void *this, float *a2, int a3, float *a4)
{
  long double v4; // st7
  long double v5; // st6
  double v6; // st7
  long double v7; // st6
  long double v8; // st6
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+8h] [ebp-4h]

  v9 = *a2 - *(float *)(*(_DWORD *)this + 716);
  v10 = a2[1] - *(float *)(*(_DWORD *)this + 720);
  v11 = a2[2] - *(float *)(*(_DWORD *)this + 724);
  off_10689714();
  v4 = sqrt(v10 * v10 + v9 * v9);
  *a4 = *a4 * v4;
  a4[1] = a4[1] * v4;
  v5 = v11;
  a4[2] = v11;
  if ( v4 * -0.1 > v11 )
  {
    if ( -v4 >= v5 || fabs(v5) < 0.001 )
    {
      v6 = v11;
      v7 = 0.0;
    }
    else
    {
      v8 = v4 / v5;
      v6 = v11;
      v7 = (-v8 - 1.0) * 0.1;
    }
  }
  else
  {
    v6 = v11;
    v7 = 1.0;
  }
  a4[2] = v6 + v7 * 5.0;
  off_10689714();
}
