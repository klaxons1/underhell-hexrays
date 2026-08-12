float *__usercall sub_1013E4E0@<eax>(float *result@<eax>, float *a2@<ecx>)
{
  double v2; // st7
  double v3; // st6
  double v4; // st4
  double v5; // st5

  v2 = (*result + result[2]) * 0.5;
  v3 = (result[3] + result[1]) * 0.5;
  v4 = (result[2] - *result) * 0.5;
  v5 = 0.5 * (result[3] - result[1]);
  *result = v2 - *a2 * v4;
  result[1] = v3 - a2[1] * v5;
  result[2] = v2 + v4 * *a2;
  result[3] = v5 * a2[1] + v3;
  return result;
}
