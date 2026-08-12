int __cdecl isalnum(int C)
{
  if ( dword_10481B60 )
    return _isalnum_l(C, 0);
  else
    return off_103FE2D8[C] & 0x107;
}
