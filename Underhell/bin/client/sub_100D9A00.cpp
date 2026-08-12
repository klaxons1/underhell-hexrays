float *__thiscall sub_100D9A00(float *this, float a2, float a3, float *a4, float *a5)
{
  float *result; // eax

  result = a5;
  if ( *(_DWORD *)(dword_104338FC + 48) )
  {
    *a4 = (this[15] + a2) * 0.5;
    *a5 = 0.5 * (this[16] + a3);
  }
  else
  {
    *a4 = a2;
    *a5 = a3;
  }
  this[15] = a2;
  this[16] = a3;
  return result;
}
