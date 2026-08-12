char __thiscall sub_101E1F30(_BYTE *this, char a2)
{
  char result; // al

  result = (this[377] ^ (16 * a2)) & 0x10;
  this[377] ^= result;
  return result;
}
