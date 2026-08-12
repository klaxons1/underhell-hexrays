float *sub_100F3450()
{
  float *v0; // eax
  float *v1; // esi
  bool v2; // zf
  float *result; // eax

  v0 = (float *)sub_100DDA40(260);
  v1 = v0;
  if ( v0 )
  {
    sub_100F2A50(v0, (int)"CSimpleEmitter");
    v1[63] = 16.0;
    *(_DWORD *)v1 = &CSimpleEmitter::`vftable';
    v1[64] = 64.0;
  }
  else
  {
    v1 = 0;
  }
  ++*((_DWORD *)v1 + 62);
  *((_DWORD *)v1 + 59) |= 2u;
  v2 = (*((_DWORD *)v1 + 62))-- == 1;
  if ( !v2 || ((_BYTE)v1[59] & 2) == 0 )
    return v1;
  v2 = sub_100EB1D0((unsigned __int16 *)v1 + 4) == 0;
  result = v1;
  if ( v2 )
    *((_DWORD *)v1 + 39) |= 1u;
  return result;
}
