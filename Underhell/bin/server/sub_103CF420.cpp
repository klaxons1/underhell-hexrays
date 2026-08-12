int __usercall sub_103CF420@<eax>(char *a1@<ecx>, double a2@<st0>)
{
  char *v2; // esi
  bool v4; // al

  v2 = a1;
  if ( *((int *)a1 + 55) <= 0 )
    return sub_1032F2D0((int)a1, a2);
  v4 = sub_10023D10(a1, 76);
  a1 = v2;
  if ( !v4 )
    return sub_1032F2D0((int)a1, a2);
  sub_10023E00(v2, 76);
  return 100;
}
