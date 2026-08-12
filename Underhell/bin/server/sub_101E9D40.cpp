_BYTE *__thiscall sub_101E9D40(_BYTE *this, _BYTE *a2)
{
  _BYTE *v3; // eax
  int *v5; // ecx

  if ( *a2 != *this )
  {
    v3 = this - 3369;
    if ( *(this - 3285) )
    {
      v3[88] |= 1u;
      *this = *a2;
      return this;
    }
    v5 = (int *)*((_DWORD *)v3 + 6);
    if ( v5 )
      sub_100194B0(v5, 3369);
    *this = *a2;
  }
  return this;
}
