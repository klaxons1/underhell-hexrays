unsigned int __thiscall sub_1026A0E0(_DWORD *this)
{
  unsigned int result; // eax

  result = this[13] & 0xFFFFFFE5 | 8;
  this[13] = result;
  return result;
}
