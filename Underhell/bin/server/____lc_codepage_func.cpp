unsigned int __cdecl ___lc_codepage_func()
{
  DWORD *v0; // ecx
  DWORD v1; // eax

  v0 = _getptd();
  v1 = v0[27];
  if ( (volatile LONG *)v1 != off_1068F1D0 && (dword_1068EF88 & v0[28]) == 0 )
    v1 = __updatetlocinfo();
  return *(_DWORD *)(v1 + 4);
}
