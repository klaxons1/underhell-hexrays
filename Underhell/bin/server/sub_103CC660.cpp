int __usercall sub_103CC660@<eax>(char *a1@<ecx>, double a2@<st0>)
{
  char *v2; // esi
  int result; // eax

  v2 = a1;
  if ( a1[5753] )
  {
    *((float *)a1 + 1429) = 0.0;
    return sub_103CC4B0((int)a1);
  }
  if ( a1[2680] )
    return sub_10399230((int)a1, a2);
  if ( a1[5760] )
    return 101;
  result = sub_103CC4B0((int)a1);
  if ( !result )
  {
    if ( sub_10023D10(v2, 84) )
    {
      sub_10023E00(v2, 84);
      return 104;
    }
    else
    {
      if ( !sub_10023D10(v2, 79) )
      {
        a1 = v2;
        return sub_10399230((int)a1, a2);
      }
      return 100;
    }
  }
  return result;
}
