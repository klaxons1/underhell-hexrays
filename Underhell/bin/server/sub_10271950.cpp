int __thiscall sub_10271950(_DWORD *this)
{
  if ( (this[206] & 4) != 0 )
    return sub_100D83F0(this, 0);
  if ( this[77] != -1
    && off_1061BE18[4 * (this[77] & 0xFFF) + 2] == this[77] >> 12
    && off_1061BE18[4 * (this[77] & 0xFFF) + 1] )
  {
    return sub_100D83F0(this, 32);
  }
  return sub_100D8440(this);
}
