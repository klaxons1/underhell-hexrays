unsigned __int8 __thiscall sub_1033DCA0(int this)
{
  unsigned __int8 result; // al

  sub_1001E3F0((_DWORD *)this);
  if ( *(float *)(this + 1672) > (double)*(float *)(dword_106B31C8 + 12) )
  {
    sub_10024290((char *)this, 21);
    sub_10024290((char *)this, 22);
  }
  sub_10024230((char *)this, 76);
  if ( sub_100697A0((_DWORD *)this, 109, 1) )
  {
    sub_10024230((char *)this, 50);
    sub_10024230((char *)this, 53);
    sub_10024230((char *)this, 54);
    sub_10024230((char *)this, 55);
    sub_10024230((char *)this, 56);
  }
  result = sub_100697A0((_DWORD *)this, 115, 1);
  if ( !result )
    return (unsigned __int8)sub_10024230((char *)this, 78);
  return result;
}
