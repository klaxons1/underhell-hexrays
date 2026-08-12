_DWORD *__thiscall sub_101E9E60(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  int *v5; // ecx

  if ( *this != *a2 )
  {
    v3 = this - 546;
    if ( *((_BYTE *)this - 2100) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *this = *a2;
      return this;
    }
    v5 = (int *)v3[6];
    if ( v5 )
      sub_100194B0(v5, 2184);
    *this = *a2;
  }
  return this;
}
