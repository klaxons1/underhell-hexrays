char *__cdecl sub_10129A00(float *a1, int a2, int a3, int a4, char a5)
{
  char *result; // eax
  float *v6; // esi

  result = sub_100E3960((int)"entity_blocker", a1, &flt_106F1CB4, a4);
  v6 = (float *)result;
  if ( result )
  {
    sub_100D69D0(result, a2, a3);
    if ( a5 )
      sub_100EA370(v6);
    return (char *)v6;
  }
  return result;
}
