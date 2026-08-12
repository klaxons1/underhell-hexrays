char __thiscall sub_10418260(_BYTE *this, char a2)
{
  char result; // al

  result = (this[20] ^ (2 * a2)) & 2;
  this[20] ^= result;
  return result;
}
