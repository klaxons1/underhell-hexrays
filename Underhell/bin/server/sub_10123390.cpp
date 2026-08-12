_BYTE *__thiscall sub_10123390(_BYTE *this, char *a2)
{
  char v2; // bl
  _BYTE *v4; // eax
  int *v6; // ecx

  v2 = *a2;
  if ( *a2 != *this )
  {
    v4 = this - 801;
    if ( *(this - 717) )
    {
      v4[88] |= 1u;
      *this = v2;
      return this;
    }
    v6 = (int *)*((_DWORD *)v4 + 6);
    if ( v6 )
      sub_100194B0(v6, 801);
    *this = v2;
  }
  return this;
}
