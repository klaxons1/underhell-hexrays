double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7)
{
  int v7; // eax
  int v8; // ecx
  char *v9; // eax

  v7 = 0;
  while ( 1 )
  {
    v8 = dword_103FED58[2 * v7];
    if ( v8 == a2 )
      break;
    if ( ++v7 >= 29 )
    {
      v9 = 0;
      goto LABEL_5;
    }
  }
  v9 = (&off_103FED5C)[2 * v7];
LABEL_5:
  if ( v9 )
  {
    _ctrlfp(v8);
    if ( !sub_1029CB0D() )
      _set_errno_from_matherr(a1);
    return a7;
  }
  else
  {
    _ctrlfp(v8);
    _set_errno_from_matherr(a1);
    return a7;
  }
}
