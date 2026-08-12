unsigned int __thiscall sub_100EB890(_DWORD *this, int a2)
{
  unsigned int result; // eax

  if ( a2 )
  {
    result = this[37] & 0xFFFFFCFF | 0x200;
    this[37] = result;
  }
  else
  {
    this[37] &= ~0x200u;
  }
  return result;
}
