int __cdecl isspace(int C)
{
  if ( dword_107011CC )
    return _isspace_l(C, 0);
  else
    return off_1068F1C0[C] & 8;
}
