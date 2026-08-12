unsigned int __thiscall sub_1026A0F0(_DWORD *this)
{
  unsigned int result; // eax

  result = this[13] & 0xFFFFFFE5 | 0x10;
  this[13] = result;
  return result;
}
