int __thiscall sub_1012B090(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int result; // eax
  int *v6; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CEntityFlame::`vftable';
  *(_DWORD *)(this + 800) = -1;
  if ( *(_DWORD *)(this + 804) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 804);
    }
    *(float *)(this + 804) = 0.0;
  }
  if ( *(_DWORD *)(this + 812) != 10 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 812);
    }
    *(_DWORD *)(this + 812) = 10;
  }
  if ( *(_DWORD *)(this + 816) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 816);
    }
    *(float *)(this + 816) = 1.0;
  }
  result = this;
  if ( *(_DWORD *)(this + 820) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 820);
    }
    result = this;
    *(float *)(this + 820) = 0.0;
  }
  *(_BYTE *)(this + 824) = 0;
  return result;
}
