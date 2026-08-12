bool __thiscall sub_10405970(int *this)
{
  return this[353] != -1
      && off_1061BE18[4 * (this[353] & 0xFFF) + 2] == (unsigned int)this[353] >> 12
      && off_1061BE18[4 * (this[353] & 0xFFF) + 1]
      || sub_100D1750(this);
}
