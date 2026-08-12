char __thiscall sub_10273930(_BYTE *this, char a2)
{
  char result; // al

  result = (this[208] ^ (2 * a2)) & 2;
  this[208] ^= result;
  return result;
}
