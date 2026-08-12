float *__thiscall sub_103B20A0(char *this, int a2, float *a3)
{
  float *result; // eax
  __int16 v4; // di
  unsigned int v5; // edx
  char *v6; // eax
  int *v7; // edx
  float *v8; // [esp+14h] [ebp+8h]

  result = a3;
  v4 = a2;
  v8 = (float *)&this[12 * a2];
  v5 = 12;
  while ( *(_DWORD *)((char *)result + (char *)v8 - (char *)a3) == *(_DWORD *)result )
  {
    v5 -= 4;
    ++result;
    if ( v5 < 4 )
      return result;
  }
  v6 = this - 3712;
  if ( *(this - 3628) )
  {
    v6[88] |= 1u;
  }
  else
  {
    v7 = (int *)*((_DWORD *)v6 + 6);
    if ( v7 )
      sub_100194B0(v7, 12 * v4 + 3712);
  }
  result = a3;
  *v8 = *a3;
  v8[1] = a3[1];
  v8[2] = a3[2];
  return result;
}
