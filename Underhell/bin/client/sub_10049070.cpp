double __thiscall sub_10049070(float *this)
{
  double v1; // st7

  v1 = *((float *)off_103DC81C + 3) - this[299];
  if ( v1 > this[300] )
    return 1.0;
  if ( v1 < this[304] )
    return 0.0;
  if ( v1 <= this[304] || this[304] + this[305] <= v1 )
    return 1.0;
  else
    return (v1 - this[304]) / this[305];
}
