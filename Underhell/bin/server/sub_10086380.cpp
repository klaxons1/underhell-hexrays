bool __usercall sub_10086380@<al>(float *a1@<eax>, float *a2@<edi>, float *a3@<esi>, float *a4)
{
  long double v4; // st7
  bool result; // al
  float v6; // [esp+4h] [ebp-14h]
  float v7; // [esp+8h] [ebp-10h]
  float v8; // [esp+Ch] [ebp-Ch]
  float v9[2]; // [esp+10h] [ebp-8h] BYREF

  result = 0;
  if ( 1.0 - (a1[1] * a3[1] + *a3 * *a1 + a1[2] * a3[2]) <= 0.01 )
  {
    v9[0] = *a2 + *a3;
    v9[1] = a2[1] + a3[1];
    if ( sub_10424800(a4, a2, v9, 0) <= 0.01 )
    {
      v6 = *a2 - *a4;
      v7 = a2[1] - a4[1];
      v8 = a2[2] - a4[2];
      off_10689714();
      v4 = fabs(*a3 * v6 + v7 * a3[1] + a3[2] * v8);
      if ( v4 <= 0.05 || fabs(v4 - 0.4472) <= 0.05 )
        return 1;
    }
  }
  return result;
}
