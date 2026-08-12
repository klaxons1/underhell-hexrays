double __thiscall sub_101A8610(float *this)
{
  double v1; // st6
  float v3; // [esp+0h] [ebp-14h]

  if ( this[301] <= 0.0 )
    return this[298];
  v1 = *((float *)off_103DC81C + 3) - this[300];
  if ( v1 >= this[301] )
    return this[298];
  v3 = v1 / this[301];
  return sub_10049180(v3, 0.0, 1.0, this[299], this[298]);
}
