float *__thiscall sub_100C5760(float *this, double *a2)
{
  int v3; // eax
  _DWORD *v5; // eax
  float v6; // [esp+Ch] [ebp+8h]

  v6 = *a2;
  if ( *(_DWORD *)this != LODWORD(v6) )
  {
    v3 = *((_DWORD *)this + 15);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
        *this = v6;
        return this;
      }
      v5 = *(_DWORD **)(v3 + 24);
      if ( v5 )
      {
        *v5 |= 0x101u;
        *(_WORD *)(sub_10153460(v5) + 2) = 0;
      }
    }
    *this = v6;
  }
  return this;
}
