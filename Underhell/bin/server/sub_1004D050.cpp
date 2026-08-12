unsigned __int8 __thiscall sub_1004D050(char **this)
{
  unsigned __int8 result; // al

  result = sub_1004CF10((int)this);
  if ( result )
  {
    if ( (unsigned __int8)sub_1004B510(this, 100003, 1)
      || (unsigned __int8)sub_1004B510(this, 100000, 1)
      || (result = sub_1004B510(this, 100005, 1)) != 0 )
    {
      sub_10024230(this[1], 26);
      return (unsigned __int8)sub_10024230(this[1], 10);
    }
  }
  return result;
}
