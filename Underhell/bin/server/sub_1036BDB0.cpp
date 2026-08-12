int __usercall sub_1036BDB0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    return 1;
  if ( sub_10023D10((_DWORD *)a1, 21) && !*(_BYTE *)(a1 + 3672) )
  {
    if ( sub_1004AE20((_DWORD *)a1, 0, 1) )
      return 43;
    sub_10023E00((char *)a1, 21);
  }
  return sub_1036B580(a1, a2);
}
