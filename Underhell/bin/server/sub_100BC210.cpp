float *__thiscall sub_100BC210(float *this, float *a2)
{
  int v3; // eax
  _DWORD *v5; // eax

  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    v3 = *((_DWORD *)this + 13);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
        *this = *a2;
        return this;
      }
      v5 = *(_DWORD **)(v3 + 24);
      if ( v5 )
      {
        *v5 |= 0x101u;
        *(_WORD *)(sub_10153460(v5) + 2) = 0;
      }
    }
    *this = *a2;
  }
  return this;
}
