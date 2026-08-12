char __usercall sub_101758F0@<al>(float *a1@<edx>, float *a2@<ecx>, float *a3@<edi>, float *a4@<esi>)
{
  double v4; // st7
  double v5; // st6
  char result; // al
  double v7; // st5
  double v8; // rt1
  double v9; // st5
  double v10; // st7
  double v11; // st6

  v4 = -a1[2];
  v5 = v4 - a2[2];
  if ( v4 <= 0.0 && v5 <= 0.0 )
    return 1;
  *a4 = *a1;
  a4[1] = a1[1];
  a4[2] = a1[2];
  *a3 = *a2;
  a3[1] = a2[1];
  a3[2] = a2[2];
  if ( v4 > 0.0 && v5 > 0.0 )
    return 0;
  v7 = v5 - v4;
  if ( v5 - v4 < 0.001 && v7 > -0.001 )
    return 1;
  v8 = -(v4 / v7);
  v9 = v4;
  v10 = v8;
  v11 = *a2 * v8;
  if ( v9 > 0.0 )
  {
    *a3 = v11;
    result = 0;
    a3[1] = a2[1] * v10;
    a3[2] = v10 * a2[2];
  }
  else
  {
    result = 0;
    *a4 = v11 + *a1;
    a4[1] = a2[1] * v10 + a1[1];
    a4[2] = v10 * a2[2] + a1[2];
  }
  return result;
}
