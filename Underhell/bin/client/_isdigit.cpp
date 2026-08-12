int __cdecl isdigit(int C)
{
  if ( dword_10481B60 )
    return _isdigit_l(C, 0);
  else
    return off_103FE2D8[C] & 4;
}
