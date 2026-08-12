int __cdecl sub_103FB6F0(int a1)
{
  int result; // eax
  int v2; // edx
  unsigned int v3; // eax

  result = 0;
  if ( *(_DWORD *)(a1 + 3404) != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3404) & 0xFFF) + 2] == *(_DWORD *)(a1 + 3404) >> 12 )
  {
    v2 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3404) & 0xFFF) + 1];
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 9072);
      if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 9072) & 0xFFF) + 2] != v3 >> 12 )
        return 0;
      else
        return off_1061BE18[4 * (*(_DWORD *)(v2 + 9072) & 0xFFF) + 1];
    }
  }
  return result;
}
