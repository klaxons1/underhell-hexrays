int __stdcall sub_1001FC70(int a1)
{
  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
    return 3;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    return ((*(_DWORD *)(a1 + 16) & 0x2000000) != 0) + 1;
  return 0;
}
