char *__cdecl sub_103BFC10(int a1)
{
  char *result; // eax

  if ( !a1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  result = sub_100E3960((int)"floorturret_tipcontroller", (float *)(a1 + 580), (float *)(a1 + 704), 0);
  if ( result )
    *((_DWORD *)result + 211) = a1;
  return result;
}
