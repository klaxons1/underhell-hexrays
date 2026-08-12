int __thiscall sub_10265F50(_BYTE *this)
{
  int result; // eax

  result = sub_100C0140((int)this);
  if ( (this[236] & 1) != 0 )
    return sub_101470D0((int)(this + 1124), result);
  return result;
}
