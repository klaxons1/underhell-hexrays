char __thiscall sub_101E21F0(_BYTE *this, char a2)
{
  char result; // al

  result = (a2 << 7) | this[376] & 0x7F;
  this[376] = result;
  return result;
}
