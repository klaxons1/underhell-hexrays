bool __cdecl sub_10260DA0(int a1, int a2, float a3, float *a4)
{
  if ( !a1 || !a2 )
    return 0;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  return sub_10260CF0(a1, (float *)(a2 + 580), a3, a4);
}
