char __thiscall sub_101E1F10(_BYTE *this, char a2)
{
  char result; // al

  result = (this[377] ^ (8 * a2)) & 8;
  this[377] ^= result;
  return result;
}
