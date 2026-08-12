int __thiscall sub_101789A0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  int result; // eax
  int *v7; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CLightGlow::`vftable';
  if ( *(_DWORD *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 800);
    }
    *(_DWORD *)(this + 800) = 0;
  }
  if ( *(_DWORD *)(this + 804) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 804);
    }
    *(_DWORD *)(this + 804) = 0;
  }
  if ( *(_DWORD *)(this + 808) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 808);
    }
    *(_DWORD *)(this + 808) = 0;
  }
  if ( *(_DWORD *)(this + 812) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 812);
    }
    *(_DWORD *)(this + 812) = 0;
  }
  result = this;
  if ( *(_DWORD *)(this + 820) != COERCE_INT(2.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 820);
    }
    result = this;
    *(float *)(this + 820) = 2.0;
  }
  return result;
}
