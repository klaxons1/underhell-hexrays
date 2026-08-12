char __usercall sub_103F2A70@<al>(int a1@<ecx>, int a2@<edi>)
{
  char *v3; // eax

  sub_10214020(a1, a2);
  sub_1023B8B0("d3_citadel.pod_open");
  sub_1023B8B0("d3_citadel.pod_close");
  v3 = *(char **)(a1 + 2132);
  if ( !v3 )
    v3 = (char *)String;
  return sub_10269E50((int *)(a1 + 1696), v3);
}
