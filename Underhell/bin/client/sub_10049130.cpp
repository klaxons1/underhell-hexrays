double __thiscall sub_10049130(float *this)
{
  double v1; // st7
  double v2; // st7

  v1 = *((float *)off_103DC81C + 3) - this[299];
  if ( v1 <= this[302] )
    return 1.0;
  v2 = v1 - this[302];
  if ( v2 <= this[303] )
    return 1.0 - v2 / this[303];
  else
    return 0.0;
}
