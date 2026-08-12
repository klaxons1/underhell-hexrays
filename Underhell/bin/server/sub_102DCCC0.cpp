float *__thiscall sub_102DCCC0(void *this, float *a2)
{
  double v2; // st7
  float *result; // eax
  double v4; // st7
  float v5; // [esp+4h] [ebp-8h]

  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 924))(this, a2);
  a2[2] = 0.0;
  v5 = a2[1] * a2[1] + *a2 * *a2;
  v2 = off_10689708(v5);
  result = a2;
  if ( 0.0 == v2 )
  {
    a2[1] = 0.0;
    *a2 = 0.0;
  }
  else
  {
    v4 = 1.0 / v2;
    *a2 = *a2 * v4;
    a2[1] = v4 * a2[1];
  }
  return result;
}
