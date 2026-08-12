int __thiscall sub_10237D10(_DWORD *this)
{
  int result; // eax

  if ( !this[12] )
  {
    if ( sub_100DDA40(36) )
    {
      result = sub_1025DC00(this, 0);
      this[12] = result;
      return result;
    }
    this[12] = 0;
  }
  return this[12];
}
