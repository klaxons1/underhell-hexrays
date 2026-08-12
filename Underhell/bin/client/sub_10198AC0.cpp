void *__thiscall sub_10198AC0(float *this, float a2)
{
  double v2; // st6
  void *result; // eax
  double v4; // st6

  v2 = a2 - this[6];
  result = off_103DC81C;
  if ( v2 >= 0.0 )
    v4 = v2 + *((float *)off_103DC81C + 3);
  else
    v4 = *((float *)off_103DC81C + 3) + 0.0;
  this[20] = v4;
  this[7] = a2;
  return result;
}
