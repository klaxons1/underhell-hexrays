int __cdecl sub_10072EE0(int a1, _DWORD *a2)
{
  if ( !a1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  return sub_10072A50((float *)a1, (float *)(a1 + 580), a2);
}
