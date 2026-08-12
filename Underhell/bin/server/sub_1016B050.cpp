unsigned int __cdecl sub_1016B050(int a1)
{
  unsigned int v1; // eax
  unsigned int result; // eax
  int v3; // edx
  unsigned int v4; // eax
  int v5; // esi

  v1 = *(_DWORD *)(a1 + 312);
  if ( v1 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != v1 >> 12 )
    result = 0;
  else
    result = off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1];
  v3 = result;
  if ( result )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 316);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 1];
      result = sub_1016AF10(v3);
      v3 = v5;
    }
    while ( v5 );
  }
  return result;
}
