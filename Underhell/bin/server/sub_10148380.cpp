int __thiscall sub_10148380(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_101480A0(this);
  *(_DWORD *)this = &CFuncAreaPortalWindow::`vftable';
  result = this;
  if ( *(_DWORD *)(this + 828) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 828) = -1;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 828);
      *(_DWORD *)(this + 828) = -1;
      return this;
    }
  }
  return result;
}
