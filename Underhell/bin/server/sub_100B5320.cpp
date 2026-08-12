char __stdcall sub_100B5320(int a1, int a2)
{
  int v3; // esi
  int i; // esi

  if ( a1 == a2 )
    return 1;
  sub_101ACB10();
  v3 = sub_101ACCC0(a1);
  if ( sub_101ACC70(v3, 1) )
  {
    while ( v3 != a1 && !(unsigned __int8)sub_101ACB50(v3) )
    {
      sub_101ACB40(v3);
      if ( v3 == a2 )
      {
LABEL_14:
        sub_101ACB30();
        return 1;
      }
      v3 = sub_101ACCC0(v3);
      if ( !sub_101ACC70(v3, 1) )
        break;
    }
  }
  sub_101ACB30();
  sub_101ACB10();
  for ( i = sub_101ACC90(a1); sub_101ACC70(i, 1); i = sub_101ACC90(i) )
  {
    if ( i == a1 || (unsigned __int8)sub_101ACB50(i) )
      break;
    sub_101ACB40(i);
    if ( i == a2 )
      goto LABEL_14;
  }
  sub_101ACB30();
  return 0;
}
