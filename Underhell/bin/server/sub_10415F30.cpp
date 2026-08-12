int __thiscall sub_10415F30(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx

  sub_100CC980((char *)this);
  *(_DWORD *)this = &CFlare::`vftable';
  if ( *(_BYTE *)(this + 2136) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 2136);
    }
    *(_BYTE *)(this + 2136) = 0;
  }
  if ( *(_DWORD *)(this + 2116) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 2116);
    }
    *(float *)(this + 2116) = 1.0;
  }
  *(_DWORD *)(this + 2108) = 0;
  *(_BYTE *)(this + 2132) = 0;
  if ( *(_BYTE *)(this + 2133) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 2133);
    }
    *(_BYTE *)(this + 2133) = 1;
  }
  if ( *(_BYTE *)(this + 2134) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 2134);
    }
    *(_BYTE *)(this + 2134) = 1;
  }
  *(float *)(this + 2124) = *(float *)(dword_106B31C8 + 12);
  if ( *(_BYTE *)(this + 224) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 0;
  }
  if ( *(_DWORD *)(this + 220) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 100;
  }
  if ( *(_BYTE *)(this + 2135) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 2135);
    }
    *(_BYTE *)(this + 2135) = 0;
  }
  *(_BYTE *)(this + 2144) = 0;
  *(_DWORD *)(this + 2148) = 0;
  return this;
}
