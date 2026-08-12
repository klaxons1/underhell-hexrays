void *__cdecl __free_lconv_num(int *a1)
{
  void *result; // eax
  void *v2; // esi

  if ( a1 )
  {
    if ( (_UNKNOWN *)*a1 != off_1068F9E8 )
      sub_10184660(*a1);
    if ( (_UNKNOWN *)a1[1] != off_1068F9EC )
      sub_10184660(a1[1]);
    if ( (_UNKNOWN *)a1[2] != off_1068F9F0 )
      sub_10184660(a1[2]);
    result = (void *)a1[12];
    if ( result != off_1068FA18 )
      result = (void *)sub_10184660(a1[12]);
    v2 = (void *)a1[13];
    if ( v2 != off_1068FA1C )
      return (void *)sub_10184660((int)v2);
  }
  return result;
}
