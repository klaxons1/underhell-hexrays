unsigned int __thiscall sub_1005C480(_DWORD *this, int a2, int a3)
{
  unsigned int result; // eax

  result = this[5];
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (this[5] & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (this[5] & 0xFFF) + 1] )
      {
        if ( this[1] )
          return sub_1005C2D0(this);
      }
    }
  }
  return result;
}
