int __cdecl iscntrl(int C)
{
  if ( dword_10481B60 )
    return _iscntrl_l(C, 0);
  else
    return off_103FE2D8[C] & 0x20;
}
