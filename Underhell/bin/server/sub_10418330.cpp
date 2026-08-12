char __thiscall sub_10418330(_BYTE *this, char a2)
{
  char result; // al

  result = (this[92] ^ (4 * a2)) & 4;
  this[92] ^= result;
  return result;
}
