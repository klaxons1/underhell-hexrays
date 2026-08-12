char __thiscall sub_101E1E90(_BYTE *this, char a2)
{
  char result; // al

  result = (a2 ^ this[376]) & 1;
  this[376] ^= result;
  return result;
}
