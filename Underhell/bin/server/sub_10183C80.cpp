float *__thiscall sub_10183C80(float *this, float *a2)
{
  float *v3; // eax
  int *v5; // ecx

  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    v3 = this - 399;
    if ( *((_BYTE *)this - 1512) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *this = *a2;
      return this;
    }
    v5 = (int *)*((_DWORD *)v3 + 6);
    if ( v5 )
      sub_100194B0(v5, 1596);
    *this = *a2;
  }
  return this;
}
