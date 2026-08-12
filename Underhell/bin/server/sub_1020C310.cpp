unsigned int __thiscall sub_1020C310(_DWORD *this)
{
  unsigned int result; // eax

  result = sub_100C1080((int)this);
  if ( this[388] )
  {
    result = this[75];
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (this[75] & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (this[75] & 0xFFF) + 1] )
          return (unsigned int)sub_101C8460((int)this, (int)this);
      }
    }
  }
  return result;
}
