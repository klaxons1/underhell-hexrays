void *__cdecl __free_lconv_mon(int *a1)
{
  void *result; // eax
  void *v2; // esi

  if ( a1 )
  {
    if ( (_UNKNOWN *)a1[3] != off_103FEA0C )
      sub_10034930(a1[3]);
    if ( (_UNKNOWN *)a1[4] != off_103FEA10 )
      sub_10034930(a1[4]);
    if ( (_UNKNOWN *)a1[5] != off_103FEA14 )
      sub_10034930(a1[5]);
    if ( (_UNKNOWN *)a1[6] != off_103FEA18 )
      sub_10034930(a1[6]);
    if ( (_UNKNOWN *)a1[7] != off_103FEA1C )
      sub_10034930(a1[7]);
    if ( (_UNKNOWN *)a1[8] != off_103FEA20 )
      sub_10034930(a1[8]);
    if ( (_UNKNOWN *)a1[9] != off_103FEA24 )
      sub_10034930(a1[9]);
    if ( (_UNKNOWN *)a1[14] != off_103FEA38 )
      sub_10034930(a1[14]);
    if ( (_UNKNOWN *)a1[15] != off_103FEA3C )
      sub_10034930(a1[15]);
    if ( (_UNKNOWN *)a1[16] != off_103FEA40 )
      sub_10034930(a1[16]);
    if ( (_UNKNOWN *)a1[17] != off_103FEA44 )
      sub_10034930(a1[17]);
    result = (void *)a1[18];
    if ( result != off_103FEA48 )
      result = (void *)sub_10034930(a1[18]);
    v2 = (void *)a1[19];
    if ( v2 != off_103FEA4C )
      return (void *)sub_10034930((int)v2);
  }
  return result;
}
