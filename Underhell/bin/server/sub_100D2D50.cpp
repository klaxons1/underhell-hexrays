float *__thiscall sub_100D2D50(float *this, float *a2)
{
  float *v3; // eax
  int *v5; // ecx

  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    v3 = this - 284;
    if ( *((_BYTE *)this - 1052) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *this = *a2;
      return this;
    }
    v5 = (int *)*((_DWORD *)v3 + 6);
    if ( v5 )
      sub_100194B0(v5, 1136);
    *this = *a2;
  }
  return this;
}
