char __thiscall sub_10261A70(_BYTE *this, char a2)
{
  char result; // al

  result = (this[376] ^ (a2 << 6)) & 0x40;
  this[376] ^= result;
  return result;
}
