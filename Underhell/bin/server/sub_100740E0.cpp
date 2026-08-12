double __thiscall sub_100740E0(float *this)
{
  double v1; // st7
  long double v2; // st6
  double v6; // st7

  v1 = (*(float *)(dword_106B31C8 + 12) - this[5]) / (this[6] - this[5]);
  if ( v1 < 0.0 || v1 > 1.0 )
    return 0.0;
  if ( this[7] == 0.0 || 1.0 - this[7] <= v1 )
  {
    if ( 1.0 - this[7] >= v1 )
    {
      return 1.0 * this[8];
    }
    else
    {
      v6 = (1.0 - v1) / this[7];
      return (3.0 * v6 * v6 - v6 * ((v6 + v6) * v6)) * this[8];
    }
  }
  else
  {
    v2 = v1 * (__FYL2X__(0.2000000029802322, 0.6931471805599453094) / this[7]) * 1.442695040888963407;
    _ST5 = v2;
    __asm { frndint }
    return (1.0 - __FSCALE__(__F2XM1__(v2 - _ST5) + 1.0, _ST5)) * this[8];
  }
}
