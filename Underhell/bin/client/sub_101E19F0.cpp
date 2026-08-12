char __thiscall sub_101E19F0(_BYTE *this, char a2)
{
  char result; // al

  result = (a2 ^ this[92]) & 1;
  this[92] ^= result;
  return result;
}
