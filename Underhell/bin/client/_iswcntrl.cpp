int __cdecl iswcntrl(wint_t C)
{
  return iswctype(C, 0x20u);
}
