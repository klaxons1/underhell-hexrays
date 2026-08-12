unsigned int __cdecl ___lc_codepage_func()
{
  DWORD *v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = (volatile LONG *)v0[27];
  if ( v1 != off_103FE2E8 && (dword_103FE0A0 & v0[28]) == 0 )
    v1 = __updatetlocinfo();
  return *((_DWORD *)v1 + 1);
}
