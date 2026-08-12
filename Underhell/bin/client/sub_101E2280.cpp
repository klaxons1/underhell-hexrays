char __thiscall sub_101E2280(_BYTE *this, char a2)
{
  char result; // al

  result = (this[377] ^ (4 * a2)) & 4;
  this[377] ^= result;
  return result;
}
