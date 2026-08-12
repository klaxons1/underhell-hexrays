double __thiscall sub_1018E630(float *this)
{
  double result; // st7
  double v2; // st6
  float v3; // [esp+0h] [ebp-14h]

  result = this[1328];
  if ( result != this[1327] && this[1329] > 0.0 )
  {
    v2 = (*((float *)off_103DC81C + 3) - this[1330]) / this[1329];
    if ( v2 < 1.0 )
    {
      v3 = v2;
      return sub_10049180(v3, 0.0, 1.0, this[1327], this[1328]);
    }
    else
    {
      result = this[1328];
      this[1327] = this[1328];
    }
  }
  return result;
}
