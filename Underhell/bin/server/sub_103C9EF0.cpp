int __thiscall sub_103C9EF0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CVortigauntChargeToken::`vftable';
  *(_DWORD *)(this + 804) = -1;
  result = this;
  if ( *(_BYTE *)(this + 808) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 808) = 0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 808);
      *(_BYTE *)(this + 808) = 0;
      return this;
    }
  }
  return result;
}
