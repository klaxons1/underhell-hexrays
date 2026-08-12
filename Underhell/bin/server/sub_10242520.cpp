int __thiscall sub_10242520(_DWORD *this)
{
  if ( this[77] != -1
    && off_1061BE18[4 * (this[77] & 0xFFF) + 2] == this[77] >> 12
    && off_1061BE18[4 * (this[77] & 0xFFF) + 1] )
  {
    return sub_100D83F0(this, 0);
  }
  else
  {
    return sub_100D83F0(this, 8);
  }
}
