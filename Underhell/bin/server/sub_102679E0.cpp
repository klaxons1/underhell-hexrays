_BYTE *__thiscall sub_102679E0(_BYTE *this, _BYTE *a2)
{
  _BYTE *v3; // eax
  int *v5; // ecx

  if ( *a2 != *this )
  {
    v3 = this - 1712;
    if ( *(this - 1628) )
    {
      v3[88] |= 1u;
      *this = *a2;
      return this;
    }
    v5 = (int *)*((_DWORD *)v3 + 6);
    if ( v5 )
      sub_100194B0(v5, 1712);
    *this = *a2;
  }
  return this;
}
