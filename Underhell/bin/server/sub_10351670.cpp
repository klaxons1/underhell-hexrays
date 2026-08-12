void __userpurge sub_10351670(char *a1@<ecx>, double a2@<st0>, int a3)
{
  int v4; // edi

  sub_102B2760(a1, a3);
  if ( !sub_10023D10(a1, 10) )
  {
    v4 = dword_106B31C8;
    sub_10021820(a1);
    if ( *(float *)(v4 + 12) - a2 >= 3.0 )
      sub_10021850(a1);
  }
}
