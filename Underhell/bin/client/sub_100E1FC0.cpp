int *sub_100E1FC0()
{
  int *result; // eax
  int *v1; // esi

  result = (int *)sub_100DDA40(32);
  v1 = result;
  if ( result )
  {
    sub_100AE000(result);
    *v1 = (int)&C_MultiplayRules::`vftable';
    v1[3] = 0;
    v1[4] = 0;
    v1[5] = 0;
    v1[6] = 0;
    v1[7] = 0;
    return (int *)sub_100E1DC0(v1);
  }
  return result;
}
