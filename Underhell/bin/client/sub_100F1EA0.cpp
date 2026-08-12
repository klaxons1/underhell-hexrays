char __thiscall sub_100F1EA0(_BYTE *this, char a2)
{
  char result; // al

  result = (a2 << 7) | this[6720] & 0x7F;
  this[6720] = result;
  return result;
}
