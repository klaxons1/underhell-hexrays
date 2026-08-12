void sub_100D9E50()
{
  int i; // esi

  for ( i = dword_10433C40; i; i = *(_DWORD *)(i + 12) )
  {
    if ( *(_DWORD *)i )
    {
      (*(void (__cdecl **)(_DWORD))(i + 8))(**(_DWORD **)i);
      **(_DWORD **)i = 0;
    }
  }
}
