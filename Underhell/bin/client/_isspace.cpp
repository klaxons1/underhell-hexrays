int __cdecl isspace(int C)
{
  if ( dword_10481B60 )
    return _isspace_l(C, 0);
  else
    return off_103FE2D8[C] & 8;
}
