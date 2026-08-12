float *__thiscall sub_1010C420(float *this, float *a2)
{
  int v2; // eax
  float *result; // eax

  v2 = *((_DWORD *)this + 4);
  if ( v2 == 3 || v2 == 15 )
  {
    result = a2;
    *a2 = *this;
    a2[1] = this[1];
    a2[2] = this[2];
  }
  else
  {
    result = a2;
    *a2 = flt_106F1CA8;
    a2[1] = flt_106F1CAC;
    a2[2] = flt_106F1CB0;
  }
  return result;
}
