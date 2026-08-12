int __cdecl isxdigit(int C)
{
  if ( dword_107011CC )
    return _isxdigit_l(C, 0);
  else
    return off_1068F1C0[C] & 0x80;
}
