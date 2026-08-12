double __thiscall sub_1011B320(float *this, float *a2)
{
  if ( *((_BYTE *)this + 16) )
    return a2[1] * this[1] + *a2 * *this + a2[2] * this[2] - this[3];
  else
    return 0.0;
}
