int __thiscall sub_1040DEB0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_102AFC00(this);
  *(_DWORD *)this = &CWeaponStunStick::`vftable';
  result = this;
  if ( *(_BYTE *)(this + 1400) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 1400) = 0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1400);
      *(_BYTE *)(this + 1400) = 0;
      return this;
    }
  }
  return result;
}
