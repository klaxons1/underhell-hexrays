int sub_101AADC0()
{
  int v0; // edi
  int result; // eax
  int v2; // esi
  int v3; // eax

  v0 = 0;
  result = sub_104277A0(off_10689BA4);
  if ( result > 0 )
  {
    do
    {
      v2 = sub_10427820(v0);
      v3 = sub_10428230(v2);
      if ( (unsigned __int8)sub_104275F0(v3) )
        sub_101543E0(v2);
      ++v0;
      result = sub_104277A0(off_10689BA4);
    }
    while ( v0 < result );
  }
  return result;
}
