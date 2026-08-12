int __thiscall sub_10183CD0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CMaterialModifyControl::`vftable';
  if ( *(_DWORD *)(this + 1568) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1568);
    }
    *(_DWORD *)(this + 1568) = -1;
  }
  if ( *(_DWORD *)(this + 1572) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1572);
    }
    *(_DWORD *)(this + 1572) = -1;
  }
  result = this;
  if ( *(_DWORD *)(this + 1600) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 1600) = 0;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 1600);
      *(_DWORD *)(this + 1600) = 0;
      return this;
    }
  }
  return result;
}
