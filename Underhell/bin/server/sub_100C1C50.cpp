_BYTE *__thiscall sub_100C1C50(_BYTE *this, char *a2)
{
  char v2; // bl
  _BYTE *v4; // eax
  int *v6; // ecx

  v2 = *a2;
  if ( *a2 != *this )
  {
    v4 = this - 112;
    if ( *(this - 28) )
    {
      v4[88] |= 1u;
      *this = v2;
      return this;
    }
    v6 = (int *)*((_DWORD *)v4 + 6);
    if ( v6 )
      sub_100194B0(v6, 112);
    *this = v2;
  }
  return this;
}
