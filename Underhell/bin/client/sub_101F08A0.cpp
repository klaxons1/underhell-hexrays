float *__thiscall sub_101F08A0(float *this, int a2, char a3, float *a4, float a5)
{
  float *v5; // edx
  char v6; // bl
  long double v7; // st7
  long double v8; // st6
  float *result; // eax

  v5 = &this[5 * a2];
  *v5 = *a4;
  v5[1] = a4[1];
  v5[2] = a4[2];
  *((_BYTE *)v5 + 16) = a3;
  v5[3] = a5;
  v6 = *v5 < 0.0;
  if ( v5[1] < 0.0 )
    v6 |= 2u;
  if ( this[5 * a2 + 2] < 0.0 )
    v6 |= 4u;
  *((_BYTE *)v5 + 17) = v6;
  v7 = a4[2];
  v8 = fabs(a4[1]);
  result = &this[3 * a2 + 30];
  *result = fabs(*a4);
  result[1] = v8;
  result[2] = fabs(v7);
  return result;
}
