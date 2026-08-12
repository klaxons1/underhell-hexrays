int __cdecl sub_10059270(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 52);
  if ( result != -1
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 52) & 0xFFF) + 2) == *(_DWORD *)(a1 + 52) >> 12
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 52) & 0xFFF) + 1) )
  {
    result = sub_10036460(*(_DWORD *)(a1 + 52));
    if ( result )
      return sub_100EA4D0(0, 0, 0);
  }
  return result;
}
