int __usercall sub_1037EBF0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  if ( *(_DWORD *)(a1 + 2324) != 3 )
    return sub_10045660(a1, a2);
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3640) )
    return 91;
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 3636) )
    return sub_10023D10((_DWORD *)a1, 23) ? 41 : 17;
  return 76;
}
