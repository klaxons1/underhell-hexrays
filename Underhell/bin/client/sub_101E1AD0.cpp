char __thiscall sub_101E1AD0(_BYTE *this, char a2)
{
  char result; // al

  result = (this[92] ^ (2 * a2)) & 2;
  this[92] ^= result;
  return result;
}
