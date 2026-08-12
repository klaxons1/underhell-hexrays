int __cdecl isdigit(int C)
{
  if ( dword_107011CC )
    return _isdigit_l(C, 0);
  else
    return off_1068F1C0[C] & 4;
}
