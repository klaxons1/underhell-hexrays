float *__thiscall sub_100127F0(_BYTE *this, float *a2, float *a3)
{
  float *result; // eax

  if ( (this[732] & 2) != 0 || this[316] == 9 )
  {
    result = a3;
    *a2 = 60.0;
    *a3 = 80.0;
  }
  else
  {
    result = a2;
    *a2 = 90.0;
    *a3 = 220.0;
  }
  return result;
}
