unsigned int *__cdecl __doserrno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 )
    return v0 + 3;
  else
    return (unsigned int *)&unk_1068F34C;
}
