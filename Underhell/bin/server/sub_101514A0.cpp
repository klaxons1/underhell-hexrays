int __thiscall sub_101514A0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CFuncOccluder::`vftable';
  result = this;
  if ( *(_BYTE *)(this + 800) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 800) = 1;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 800);
      *(_BYTE *)(this + 800) = 1;
      return this;
    }
  }
  return result;
}
