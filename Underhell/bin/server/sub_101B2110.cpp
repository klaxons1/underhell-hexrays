int __thiscall sub_101B2110(float *this, float *a2, float *a3, unsigned __int16 a4)
{
  double v5; // st7
  double v6; // st7
  int v7; // ecx
  float *v8; // edx
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+14h] [ebp-Ch]
  float v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-4h]
  float v15; // [esp+28h] [ebp+8h]

  if ( *a2 * *this + this[1] * a2[1] + a2[2] * this[2] > 0.0 )
    return -1;
  v12 = *a2 - *this;
  v13 = a2[1] - this[1];
  v14 = a2[2] - this[2];
  v10 = this[2] * this[2] + *this * *this + this[1] * this[1];
  v5 = off_10689708(v10);
  if ( 0.0 == v5 )
  {
    v11 = v12 * v12 + v13 * v13 + v14 * v14;
    v6 = off_10689708(v11) / (*(float *)(dword_106B31C8 + 12) - this[3]);
  }
  else
  {
    v6 = -((this[1] * v13 + *this * v12 + v14 * this[2]) / v5 / (*(float *)(dword_106B31C8 + 12) - this[3]));
  }
  if ( *(_DWORD *)(dword_106B9E04 + 48) )
  {
    Msg("Reversal accel is %f/%f\n", v6, *a3);
    v15 = v6;
    v6 = v15;
  }
  v7 = a4 - 1;
  if ( v7 >= 0 )
  {
    if ( a4 < 4u )
    {
LABEL_15:
      if ( v7 >= 0 )
      {
        while ( v6 <= a3[v7] )
        {
          if ( --v7 < 0 )
            return v7;
        }
      }
    }
    else
    {
      v8 = &a3[v7 - 2];
      while ( v6 <= v8[2] )
      {
        if ( v6 > v8[1] )
          return v7 - 1;
        if ( v6 > *v8 )
          return v7 - 2;
        if ( v6 > *(v8 - 1) )
        {
          v7 -= 3;
          return v7;
        }
        v7 -= 4;
        v8 -= 4;
        if ( v7 < 3 )
          goto LABEL_15;
      }
    }
  }
  return v7;
}
