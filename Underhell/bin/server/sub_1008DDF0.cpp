int __usercall sub_1008DDF0@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // edi

  v3 = *(_DWORD *)(a1 + 4);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(a1 + 4));
  return sub_10085990(*(_DWORD **)(a1 + 20), a2, v3 + 580, a1, *(_DWORD *)(a1 + 4), (float *)(v3 + 580), 1, 0);
}
