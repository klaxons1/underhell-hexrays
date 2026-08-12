int __thiscall sub_101FD760(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CPointCamera::`vftable';
  if ( *(_DWORD *)(this + 840) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 840);
    }
    *(_DWORD *)(this + 840) = 0;
  }
  if ( *(_BYTE *)(this + 836) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 836);
    }
    *(_BYTE *)(this + 836) = 0;
  }
  if ( *(_BYTE *)(this + 844) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 844);
    }
    *(_BYTE *)(this + 844) = 0;
  }
  *(_BYTE *)(this + 845) = 0;
  if ( *(_BYTE *)(this + 816) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 816);
    }
    *(_BYTE *)(this + 816) = 0;
  }
  *(_DWORD *)(this + 848) = dword_106C0F80;
  dword_106C0F80 = this;
  return this;
}
