int __thiscall sub_10271BA0(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CVGuiScreen::`vftable';
  *(_DWORD *)(this + 828) = -1;
  if ( *(_DWORD *)(this + 820) != 1023 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 820);
    }
    *(_DWORD *)(this + 820) = 1023;
  }
  result = this;
  if ( *(_DWORD *)(this + 828) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 828) = 0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 828);
      *(_DWORD *)(this + 828) = 0;
      return this;
    }
  }
  return result;
}
