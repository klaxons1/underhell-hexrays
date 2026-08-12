float *__usercall sub_10113F80@<eax>(float *result@<eax>, float *a2@<ecx>)
{
  *result = fabs(*a2);
  result[1] = fabs(a2[1]);
  result[2] = fabs(a2[2]);
  result[4] = fabs(a2[4]);
  result[5] = fabs(a2[5]);
  result[6] = fabs(a2[6]);
  result[8] = fabs(a2[8]);
  result[9] = fabs(a2[9]);
  result[10] = fabs(a2[10]);
  return result;
}
