int __usercall sub_102B3070@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  if ( *(_DWORD *)(a1 + 8) && (*(_DWORD *)(a1 + 236) & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1011BC50((float *)(a1 + 580), (float *)(a1 + 3620), 0, 0, 255, 1, 0.0);
  }
  return sub_1002D900((_DWORD *)a1, a2);
}
