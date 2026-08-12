int __thiscall sub_101316E0(_DWORD *this)
{
  if ( (this[48] & 0x20) != 0 )
    return sub_100D83F0(this, 16);
  if ( (this[63] & 0x20000) != 0 )
    return sub_100D83F0(this, 8);
  return sub_100D83F0(this, 32);
}
