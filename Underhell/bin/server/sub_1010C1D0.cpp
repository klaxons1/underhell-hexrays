char __thiscall sub_1010C1D0(_DWORD *this, int a2, const char *a3)
{
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  const char *v8; // ecx

  if ( !a2 )
    return 0;
  v4 = (_DWORD *)this[12];
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v5 = v4[6];
    if ( v5 == -1 || off_1061BE18[4 * (v4[6] & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v4[6] & 0xFFF) + 1];
    if ( v6 == a2 )
    {
      if ( !a3 )
        break;
      v7 = strlen(a3);
      v8 = (const char *)v4[2];
      if ( !v8 )
        v8 = String;
      if ( !sub_104291C0(v8, a3, v7) )
        break;
    }
    v4 = (_DWORD *)v4[12];
    if ( !v4 )
      return 0;
  }
  return 1;
}
