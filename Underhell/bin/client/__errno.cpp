int *__cdecl _errno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 )
    return (int *)(v0 + 2);
  else
    return (int *)&unk_103FE468;
}
