char __thiscall sub_101E1EB0(_BYTE *this, char a2)
{
  char result; // al

  result = (this[376] ^ (2 * a2)) & 2;
  this[376] ^= result;
  return result;
}
