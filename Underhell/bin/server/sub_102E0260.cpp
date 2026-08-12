_DWORD *__thiscall sub_102E0260(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  int *v5; // ecx

  if ( *this != *a2 )
  {
    v3 = this - 1261;
    if ( *((_BYTE *)this - 4960) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *this = *a2;
      return this;
    }
    v5 = (int *)v3[6];
    if ( v5 )
      sub_100194B0(v5, 5044);
    *this = *a2;
  }
  return this;
}
