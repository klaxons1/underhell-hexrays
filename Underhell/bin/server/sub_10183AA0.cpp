_DWORD *__thiscall sub_10183AA0(_DWORD *this, int *a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int *v6; // ecx

  v2 = *a2;
  if ( *this != *a2 )
  {
    v4 = this - 400;
    if ( *((_BYTE *)this - 1516) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *this = v2;
      return this;
    }
    v6 = (int *)v4[6];
    if ( v6 )
      sub_100194B0(v6, 1600);
    *this = v2;
  }
  return this;
}
