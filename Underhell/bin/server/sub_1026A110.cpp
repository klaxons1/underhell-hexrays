unsigned int __thiscall sub_1026A110(_DWORD *this)
{
  unsigned int result; // eax

  result = this[13] & 0xFFFFFFE5 | 2;
  this[13] = result;
  return result;
}
