int __thiscall sub_10133290(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CEnvScreenOverlay::`vftable';
  if ( *(_DWORD *)(this + 880) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 880);
    }
    *(float *)(this + 880) = 0.0;
  }
  if ( *(_DWORD *)(this + 884) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 884);
    }
    *(_DWORD *)(this + 884) = 0;
  }
  result = this;
  if ( *(_BYTE *)(this + 888) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 888) = 0;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 888);
      *(_BYTE *)(this + 888) = 0;
      return this;
    }
  }
  return result;
}
