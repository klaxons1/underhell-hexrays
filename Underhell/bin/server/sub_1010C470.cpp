char __stdcall sub_1010C470(_DWORD *a1)
{
  int v1; // eax
  _DWORD *i; // edx

  v1 = 0;
  if ( !*(_WORD *)(a1[2] + 16) )
    return 1;
  for ( i = (_DWORD *)(*a1 + 16); !*i; i += 5 )
  {
    if ( ++v1 >= *(unsigned __int16 *)(a1[2] + 16) )
      return 1;
  }
  return 0;
}
