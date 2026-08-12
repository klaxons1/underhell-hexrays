char __usercall sub_103E52F0@<al>(int a1@<ecx>, int a2@<edi>)
{
  char *v3; // eax

  sub_102074B0(a1, a2);
  v3 = *(char **)(a1 + 1732);
  if ( !v3 )
    v3 = (char *)String;
  return sub_10269E50((int *)(a1 + 1124), v3);
}
