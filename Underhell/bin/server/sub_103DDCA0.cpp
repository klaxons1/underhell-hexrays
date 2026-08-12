int __thiscall sub_103DDCA0(_DWORD *this)
{
  if ( this[75] != -1
    && off_1061BE18[4 * (this[75] & 0xFFF) + 2] == this[75] >> 12
    && off_1061BE18[4 * (this[75] & 0xFFF) + 1] )
  {
    return sub_100D83F0(this, 0);
  }
  else
  {
    return sub_100D83F0(this, 32);
  }
}
