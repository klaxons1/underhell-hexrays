int __thiscall sub_1022E6D0(_DWORD *this)
{
  int result; // eax

  result = this[4];
  if ( result > this[7] )
  {
    if ( (*((_BYTE *)this + 21) & 8) == 0 && (this[5] & 1) == 0 )
    {
      if ( sub_1022E680((int)this, 1) )
      {
        *(_BYTE *)(this[4] - this[8] + *this) = 0;
        result = this[4];
        this[7] = result;
        return result;
      }
      *((_BYTE *)this + 20) &= ~1u;
    }
    result = this[4];
    this[7] = result;
  }
  return result;
}
