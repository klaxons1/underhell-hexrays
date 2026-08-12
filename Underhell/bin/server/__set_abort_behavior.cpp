unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_1068EA10;
  dword_1068EA10 = Mask & Flags | dword_1068EA10 & ~Mask;
  return result;
}
