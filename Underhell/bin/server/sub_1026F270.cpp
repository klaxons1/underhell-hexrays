char __usercall sub_1026F270@<al>(int a1@<ecx>, int a2@<edi>)
{
  char *v3; // eax
  char result; // al

  sub_10213FC0((_DWORD *)a1, a2);
  v3 = *(char **)(a1 + 2112);
  if ( !v3 )
    v3 = (char *)String;
  result = sub_10269E50((int *)(a1 + 1676), v3);
  *(_BYTE *)(a1 + 1781) = 1;
  return result;
}
