unsigned int __thiscall sub_10086130(_DWORD *this)
{
  unsigned int result; // eax

  result = this[2] & 0xEFFFFFC3 | 0x10000000;
  this[2] = result;
  byte_1069362F = 0;
  return result;
}
