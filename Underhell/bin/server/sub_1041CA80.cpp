char __thiscall sub_1041CA80(_BYTE *this, char a2)
{
  char result; // al

  result = (this[524] ^ (4 * a2)) & 4;
  this[524] ^= result;
  return result;
}
