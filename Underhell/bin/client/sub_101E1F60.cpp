char __thiscall sub_101E1F60(_BYTE *this, char a2)
{
  char result; // al

  result = (this[377] ^ (a2 << 6)) & 0x40;
  this[377] ^= result;
  return result;
}
