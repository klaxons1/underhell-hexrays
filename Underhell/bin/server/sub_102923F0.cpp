float *__thiscall sub_102923F0(float *this, float *a2)
{
  float *result; // eax
  unsigned int v3; // esi
  float *i; // edx

  result = this;
  v3 = 12;
  for ( i = a2; *(_DWORD *)((char *)i + (char *)this - (char *)a2) == *(_DWORD *)i; ++i )
  {
    v3 -= 4;
    if ( v3 < 4 )
      return result;
  }
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  return result;
}
