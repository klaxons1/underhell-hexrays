float *__thiscall sub_103DE5C0(float *this, float *a2)
{
  float *v3; // eax
  int *v5; // ecx

  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    v3 = this - 226;
    if ( *((_BYTE *)this - 820) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *this = *a2;
      return this;
    }
    v5 = (int *)*((_DWORD *)v3 + 6);
    if ( v5 )
      sub_100194B0(v5, 904);
    *this = *a2;
  }
  return this;
}
