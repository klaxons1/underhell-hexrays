char __thiscall sub_1041CB00(_BYTE *this, char a2)
{
  char result; // al

  result = (a2 ^ this[524]) & 1;
  this[524] ^= result;
  return result;
}
