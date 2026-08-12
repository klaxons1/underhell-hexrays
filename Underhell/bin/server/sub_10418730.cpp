char __thiscall sub_10418730(_BYTE *this, char a2)
{
  char result; // al

  result = (this[376] ^ (8 * a2)) & 8;
  this[376] ^= result;
  return result;
}
