char __thiscall sub_100CD650(unsigned int *this, int a2)
{
  unsigned int *v2; // edi
  int v3; // esi
  _DWORD *i; // edx
  int v5; // ecx
  unsigned int *v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int *v11; // edx
  int v12; // esi

  v2 = this + 477;
  v3 = 0;
  for ( i = this + 477; ; ++i )
  {
    v5 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( a2 == v5 )
      break;
    if ( ++v3 >= 48 )
      return 0;
  }
  if ( v2[v3] != -1 )
  {
    v7 = v2 - 477;
    if ( *((_BYTE *)v2 - 1824) )
    {
      *((_BYTE *)v7 + 88) |= 1u;
    }
    else
    {
      v8 = (int *)v7[6];
      if ( v8 )
        sub_100194B0(v8, 4 * v3 + 1908);
    }
    v2[v3] = -1;
  }
  sub_100D3450(0);
  v9 = this[525];
  if ( v9 == -1 || off_1061BE18[4 * (this[525] & 0xFFF) + 2] != this[525] >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (this[525] & 0xFFF) + 1];
  if ( a2 == v10 && v9 != -1 )
  {
    v11 = &off_1061BE18[4 * (this[525] & 0xFFF) + 1];
    if ( off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v9 >> 12 )
    {
      v12 = *v11;
      if ( *v11 )
      {
        sub_100C9FD0(this + 525, 0);
        (*(void (__thiscall **)(unsigned int *, int, _DWORD))(*this + 1132))(this, v12, 0);
      }
    }
  }
  return 1;
}
