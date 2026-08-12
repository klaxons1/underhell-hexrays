BOOL __cdecl sub_101CDD20(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  _DWORD *i; // edx
  _DWORD *v6; // edx

  v3 = 0;
  if ( a1 > 0 )
  {
    for ( i = a3; *(_DWORD *)((char *)i + a2 - (_DWORD)a3) == *i; ++i )
    {
      if ( ++v3 >= a1 )
        return v3 == a1;
    }
    if ( v3 < a1 )
    {
      v3 = 0;
      v6 = &a3[a1 - 1];
      do
      {
        if ( *(_DWORD *)(a2 + 4 * v3) != *v6 )
          break;
        ++v3;
        --v6;
      }
      while ( v3 < a1 );
    }
  }
  return v3 == a1;
}
