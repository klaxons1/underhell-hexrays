float *__userpurge sub_100F2B60@<eax>(int a1@<ecx>, int a2@<esi>, int a3, int a4, float *a5)
{
  float *result; // eax

  result = (float *)sub_100F06D0(a1 + 8, a2, a3, a4);
  if ( result )
  {
    result[3] = *a5;
    result[4] = a5[1];
    result[5] = a5[2];
  }
  return result;
}
