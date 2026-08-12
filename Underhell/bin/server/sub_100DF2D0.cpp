int __thiscall sub_100DF2D0(_DWORD *this)
{
  int result; // eax

  if ( this[6] )
  {
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    return sub_1011CB60((int)(this + 145), (int)(this + 176), 20.0, 1, 0.0);
  }
  return result;
}
