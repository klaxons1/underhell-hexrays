void *__thiscall sub_100B20D0(float *this, float *a2)
{
  void *result; // eax

  this[7] = *a2;
  this[8] = a2[1];
  this[9] = a2[2];
  sub_10076970(this + 7);
  result = off_103DC81C;
  this[19] = *(float *)off_103DC81C;
  return result;
}
