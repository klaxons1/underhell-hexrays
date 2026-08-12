char __thiscall sub_1027D060(_BYTE *this, char a2)
{
  char result; // al

  result = (this[52] ^ (2 * a2)) & 2;
  this[52] ^= result;
  return result;
}
