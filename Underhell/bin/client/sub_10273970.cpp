char __thiscall sub_10273970(_BYTE *this, char a2)
{
  char result; // al

  result = (a2 ^ this[208]) & 1;
  this[208] ^= result;
  return result;
}
