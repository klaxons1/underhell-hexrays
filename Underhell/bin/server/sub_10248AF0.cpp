void __cdecl sub_10248AF0(int a1)
{
  int v1; // esi
  int v2; // edx

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v1 = *(_DWORD *)(a1 + 312) == -1
        || off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != *(_DWORD *)(a1 + 312) >> 12
         ? 0
         : off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1];
      while ( v1 )
      {
        v2 = v1;
        if ( *(_DWORD *)(v1 + 316) == -1
          || off_1061BE18[4 * (*(_DWORD *)(v1 + 316) & 0xFFF) + 2] != *(_DWORD *)(v1 + 316) >> 12 )
        {
          v1 = 0;
        }
        else
        {
          v1 = off_1061BE18[4 * (*(_DWORD *)(v1 + 316) & 0xFFF) + 1];
        }
        sub_10248AF0(v2);
      }
    }
    sub_1025FAC0(a1);
  }
}
