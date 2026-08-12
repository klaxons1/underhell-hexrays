char __thiscall sub_101E2260(_BYTE *this, char a2)
{
  char result; // al

  result = (this[377] ^ (2 * a2)) & 2;
  this[377] ^= result;
  return result;
}
