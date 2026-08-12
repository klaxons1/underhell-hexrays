double __thiscall sub_1018FBF0(float *this)
{
  double result; // st7
  float v2; // [esp+0h] [ebp-14h]

  result = 0.0;
  if ( 0.0 != this[300] )
  {
    v2 = *((float *)off_103DC81C + 3) - this[301];
    return sub_100260E0(v2, 0.0, this[300], 0.0, 1.0);
  }
  return result;
}
