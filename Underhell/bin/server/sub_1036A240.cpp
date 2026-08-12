unsigned __int8 __thiscall sub_1036A240(char *this)
{
  unsigned __int8 result; // al

  if ( sub_100697A0(this, 105, 1) || sub_100697A0(this, 43, 1) || sub_100697A0(this, 27, 1) && (this[2716] & 0x40) != 0 )
  {
    sub_10024290(this, 17);
    sub_10024290(this, 18);
  }
  else
  {
    sub_10024230(this, 17);
    sub_10024230(this, 18);
  }
  result = sub_100697A0(this, 43, 1);
  if ( result )
  {
    if ( this[3652] )
      return (unsigned __int8)sub_10024290(this, 13);
  }
  return result;
}
