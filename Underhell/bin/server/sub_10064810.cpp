int *__thiscall sub_10064810(int *this, double *a2)
{
  int v3; // ebx
  int *v4; // eax
  int *v6; // ecx

  v3 = *this * (int)*a2;
  if ( *this != v3 )
  {
    v4 = this - 300;
    if ( *((_BYTE *)this - 1116) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *this = v3;
      return this;
    }
    v6 = (int *)v4[6];
    if ( v6 )
      sub_100194B0(v6, 1200);
    *this = v3;
  }
  return this;
}
