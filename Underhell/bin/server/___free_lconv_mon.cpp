void *__cdecl __free_lconv_mon(int *a1)
{
  void *result; // eax
  void *v2; // esi

  if ( a1 )
  {
    if ( (_UNKNOWN *)a1[3] != off_1068F9F4 )
      sub_10184660(a1[3]);
    if ( (_UNKNOWN *)a1[4] != off_1068F9F8 )
      sub_10184660(a1[4]);
    if ( (_UNKNOWN *)a1[5] != off_1068F9FC )
      sub_10184660(a1[5]);
    if ( (_UNKNOWN *)a1[6] != off_1068FA00 )
      sub_10184660(a1[6]);
    if ( (_UNKNOWN *)a1[7] != off_1068FA04 )
      sub_10184660(a1[7]);
    if ( (_UNKNOWN *)a1[8] != off_1068FA08 )
      sub_10184660(a1[8]);
    if ( (_UNKNOWN *)a1[9] != off_1068FA0C )
      sub_10184660(a1[9]);
    if ( (_UNKNOWN *)a1[14] != off_1068FA20 )
      sub_10184660(a1[14]);
    if ( (_UNKNOWN *)a1[15] != off_1068FA24 )
      sub_10184660(a1[15]);
    if ( (_UNKNOWN *)a1[16] != off_1068FA28 )
      sub_10184660(a1[16]);
    if ( (_UNKNOWN *)a1[17] != off_1068FA2C )
      sub_10184660(a1[17]);
    result = (void *)a1[18];
    if ( result != off_1068FA30 )
      result = (void *)sub_10184660(a1[18]);
    v2 = (void *)a1[19];
    if ( v2 != off_1068FA34 )
      return (void *)sub_10184660((int)v2);
  }
  return result;
}
