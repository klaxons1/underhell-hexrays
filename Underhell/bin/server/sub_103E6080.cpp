int *__thiscall sub_103E6080(int *this, double *a2)
{
  int v3; // edi
  int *v4; // eax
  int *v6; // ecx

  v3 = (int)*a2;
  if ( *this != v3 )
  {
    v4 = this - 211;
    if ( *((_BYTE *)this - 760) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *this = v3;
      return this;
    }
    v6 = (int *)v4[6];
    if ( v6 )
      sub_100194B0(v6, 844);
    *this = v3;
  }
  return this;
}
