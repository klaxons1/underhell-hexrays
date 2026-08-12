unsigned int __thiscall sub_1020C360(_DWORD *this, int a2, int a3)
{
  unsigned int result; // eax

  result = sub_100E1C80((int)this, a2, a3);
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
