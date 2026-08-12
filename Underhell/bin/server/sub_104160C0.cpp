int __thiscall sub_104160C0(int this, int a2)
{
  int v3; // ebx
  int *v4; // ecx
  int *v6; // ecx

  v3 = sub_100CAFA0(this, a2);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 && *(_BYTE *)(this + 2133) )
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
    *(_BYTE *)(this + 2133) = 0;
  }
  if ( (*(_BYTE *)(this + 248) & 2) != 0 && *(_BYTE *)(this + 2134) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 2134) = 0;
      return v3;
    }
    v6 = *(int **)(this + 24);
    if ( v6 )
      sub_100194B0(v6, 2134);
    *(_BYTE *)(this + 2134) = 0;
  }
  return v3;
}
