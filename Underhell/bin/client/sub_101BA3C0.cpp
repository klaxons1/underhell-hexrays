int __stdcall sub_101BA3C0(int a1)
{
  if ( a1
    && *(_DWORD *)(a1 + 1124) != -1
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1124) & 0xFFF) + 2) == *(_DWORD *)(a1 + 1124) >> 12 )
  {
    return *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1124) & 0xFFF) + 1);
  }
  else
  {
    return 0;
  }
}
