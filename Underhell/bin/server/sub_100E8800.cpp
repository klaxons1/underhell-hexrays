char __thiscall sub_100E8800(_BYTE *this, char a2)
{
  char result; // al

  result = a2;
  this[446] = 0;
  if ( (a2 & 0x20) != 0 )
    this[446] = 1;
  if ( (a2 & 0x10) != 0 )
    this[446] |= 2u;
  return result;
}
