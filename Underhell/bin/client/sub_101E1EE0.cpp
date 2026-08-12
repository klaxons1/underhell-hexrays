char __thiscall sub_101E1EE0(_BYTE *this, char a2)
{
  char result; // al

  result = (this[376] ^ (32 * a2)) & 0x20;
  this[376] ^= result;
  return result;
}
