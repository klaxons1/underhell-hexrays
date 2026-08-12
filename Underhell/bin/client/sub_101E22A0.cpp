char __thiscall sub_101E22A0(_BYTE *this, char a2)
{
  char result; // al

  result = (this[377] ^ (32 * a2)) & 0x20;
  this[377] ^= result;
  return result;
}
