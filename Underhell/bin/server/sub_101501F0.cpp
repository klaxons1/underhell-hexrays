char __thiscall sub_101501F0(int this)
{
  char result; // al

  result = (unsigned __int8)sub_100E38F0((float *)this);
  if ( (*(_BYTE *)(this + 252) & 1) == 0 )
    return sub_10150040(this);
  return result;
}
