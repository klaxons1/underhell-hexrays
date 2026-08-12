char __stdcall sub_100FADC0(_DWORD *a1)
{
  int v1; // eax

  v1 = 0;
  if ( !*(_WORD *)(a1[2] + 16) )
    return 1;
  while ( !*(_DWORD *)(*a1 + 4 * v1) )
  {
    if ( ++v1 >= *(unsigned __int16 *)(a1[2] + 16) )
      return 1;
  }
  return 0;
}
