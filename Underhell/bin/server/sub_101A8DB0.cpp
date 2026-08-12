int __usercall sub_101A8DB0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  unsigned int v4; // eax
  int v5; // ecx

  sub_10023E00((char *)a1, 62);
  if ( (*(_BYTE *)(a1 + 250) & 1) != 0 )
  {
    sub_1002B660(a1, 1);
    return 88;
  }
  v4 = *(_DWORD *)(a1 + 2608);
  if ( v4 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 2608) & 0xFFF) + 2] == v4 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 2608) & 0xFFF) + 1] )
  {
    return 90;
  }
  v5 = a1;
  if ( *(_DWORD *)(a1 + 2324) != 3 )
    return sub_10045660(v5, a2);
  if ( sub_10023D10((_DWORD *)a1, 26) || sub_10023D10((_DWORD *)a1, 30) )
  {
    v5 = a1;
    return sub_10045660(v5, a2);
  }
  if ( !sub_10023D10((_DWORD *)a1, 10) )
    return 89;
  if ( sub_10023D10((_DWORD *)a1, 22) )
    return 44;
  if ( sub_10023D10((_DWORD *)a1, 21) )
    return 43;
  else
    return 89;
}
