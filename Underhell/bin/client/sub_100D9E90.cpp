char sub_100D9E90()
{
  int v0; // esi
  int v1; // eax
  int i; // esi

  v0 = dword_10433C40;
  if ( !dword_10433C40 )
    return 1;
  while ( 1 )
  {
    v1 = (*(int (**)(void))(v0 + 4))();
    if ( !v1 )
      break;
    **(_DWORD **)v0 = v1;
LABEL_5:
    v0 = *(_DWORD *)(v0 + 12);
    if ( !v0 )
      return 1;
  }
  if ( !*(_DWORD *)v0 )
    goto LABEL_5;
  for ( i = dword_10433C40; i; i = *(_DWORD *)(i + 12) )
  {
    if ( *(_DWORD *)i )
    {
      (*(void (__cdecl **)(_DWORD))(i + 8))(**(_DWORD **)i);
      **(_DWORD **)i = 0;
    }
  }
  return 0;
}
