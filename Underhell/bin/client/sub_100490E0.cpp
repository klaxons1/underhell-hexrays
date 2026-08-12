double __thiscall sub_100490E0(float *this)
{
  double v1; // st7
  double v2; // st7

  v1 = *((float *)off_103DC81C + 3) - this[299];
  if ( v1 < this[304] || v1 <= this[300] )
    return 1.0;
  v2 = v1 - this[300];
  if ( v2 <= this[301] )
    return 1.0 - v2 / this[301];
  else
    return 0.0;
}
