double __thiscall sub_10123910(float *this)
{
  if ( 0.0 == this[310] || this[318] + this[310] < *((float *)off_103DC81C + 3) )
    return this[309];
  else
    return (*((float *)off_103DC81C + 3) - this[318]) / this[310] * (this[317] - this[316]) + this[316];
}
