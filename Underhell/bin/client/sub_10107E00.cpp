float *__stdcall sub_10107E00(float *a1)
{
  char *v1; // eax
  float *result; // eax

  v1 = (char *)sub_100422D0();
  if ( v1 )
  {
    result = (float *)sub_10034A00(v1);
    *a1 = *result;
    a1[1] = result[1];
    a1[2] = result[2];
  }
  else
  {
    result = a1;
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
  }
  return result;
}
