char __cdecl sub_10232FD0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // eax

  v4 = 16;
  while ( *a1 == *a2 )
  {
    v4 -= 4;
    ++a2;
    ++a1;
    if ( v4 < 4 )
      return 1;
  }
  return 0;
}
