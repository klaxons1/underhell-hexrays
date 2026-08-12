int __cdecl isxdigit(int C)
{
  if ( dword_10481B60 )
    return _isxdigit_l(C, 0);
  else
    return off_103FE2D8[C] & 0x80;
}
