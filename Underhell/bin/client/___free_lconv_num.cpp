void *__cdecl __free_lconv_num(int *a1)
{
  void *result; // eax
  void *v2; // esi

  if ( a1 )
  {
    if ( (_UNKNOWN *)*a1 != off_103FEA00 )
      sub_10034930(*a1);
    if ( (_UNKNOWN *)a1[1] != off_103FEA04 )
      sub_10034930(a1[1]);
    if ( (_UNKNOWN *)a1[2] != off_103FEA08 )
      sub_10034930(a1[2]);
    result = (void *)a1[12];
    if ( result != off_103FEA30 )
      result = (void *)sub_10034930(a1[12]);
    v2 = (void *)a1[13];
    if ( v2 != off_103FEA34 )
      return (void *)sub_10034930((int)v2);
  }
  return result;
}
