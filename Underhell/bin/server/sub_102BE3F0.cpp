float *__thiscall sub_102BE3F0(float *this, float *a2)
{
  unsigned int v4; // ecx
  float *v5; // eax
  int v6; // edx
  float *result; // eax

  v4 = 12;
  v5 = a2;
  v6 = (char *)this - (char *)a2;
  while ( *(_DWORD *)((char *)v5 + v6) == *(_DWORD *)v5 )
  {
    v4 -= 4;
    ++v5;
    if ( v4 < 4 )
      return this;
  }
  (**((void (__thiscall ***)(int, float *))this - 10))((int)(this - 10), this);
  *this = *a2;
  result = this;
  this[1] = a2[1];
  this[2] = a2[2];
  return result;
}
