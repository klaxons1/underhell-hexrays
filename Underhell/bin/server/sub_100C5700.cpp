float *__thiscall sub_100C5700(float *this, int *a2)
{
  float v3; // ecx
  int v4; // eax
  _DWORD *v6; // eax
  float v7; // [esp+Ch] [ebp+8h]

  v3 = *this;
  v7 = v3 - (double)*a2;
  if ( LODWORD(v3) != LODWORD(v7) )
  {
    v4 = *((_DWORD *)this + 15);
    if ( v4 )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
        *this = v7;
        return this;
      }
      v6 = *(_DWORD **)(v4 + 24);
      if ( v6 )
      {
        *v6 |= 0x101u;
        *(_WORD *)(sub_10153460(v6) + 2) = 0;
      }
    }
    *this = v7;
  }
  return this;
}
