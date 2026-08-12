unsigned int __cdecl sub_10108E20(int a1, int a2, int a3)
{
  unsigned int result; // eax
  int v4; // esi

  *(_DWORD *)(a1 + 312) |= a2;
  result = *(_DWORD *)(a1 + 328);
  if ( result == -1 || (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 328) & 0xFFF) + 2) != result) )
    v4 = 0;
  else
    v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 328) & 0xFFF) + 1);
  while ( v4 )
  {
    sub_10108E20(v4, a3 | a2, 0);
    result = *(_DWORD *)(v4 + 332);
    if ( result == -1 || (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 332) & 0xFFF) + 2) != result) )
      v4 = 0;
    else
      v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 332) & 0xFFF) + 1);
  }
  return result;
}
