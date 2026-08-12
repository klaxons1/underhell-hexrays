int __cdecl isalnum(int C)
{
  if ( dword_107011CC )
    return _isalnum_l(C, 0);
  else
    return off_1068F1C0[C] & 0x107;
}
