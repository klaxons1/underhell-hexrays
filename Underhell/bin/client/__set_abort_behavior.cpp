unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_103FDB70;
  dword_103FDB70 = Mask & Flags | dword_103FDB70 & ~Mask;
  return result;
}
