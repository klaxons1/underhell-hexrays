float *__thiscall sub_101E7C30(float *this, float *a2)
{
  unsigned int v4; // ecx
  float *v5; // eax
  int v6; // edx
  float *result; // eax
  float *v8; // eax
  int *v9; // ecx

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
  v8 = this - 1068;
  if ( *((_BYTE *)this - 4188) )
  {
    *((_BYTE *)v8 + 88) |= 1u;
  }
  else
  {
    v9 = (int *)*((_DWORD *)v8 + 6);
    if ( v9 )
      sub_100194B0(v9, 4272);
  }
  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  return result;
}
