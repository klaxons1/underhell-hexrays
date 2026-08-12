int __thiscall sub_10235EB0(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CShadowControl::`vftable';
  sub_100C34C0((float *)(this + 800), 0.2, 0.2, -2.0);
  if ( *(_DWORD *)(this + 816) != COERCE_INT(50.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 816);
    }
    *(float *)(this + 816) = 50.0;
  }
  sub_10235DD0((_BYTE *)(this + 812), 64, 64, 64, 0);
  result = this;
  if ( *(_BYTE *)(this + 820) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 820) = 0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 820);
      *(_BYTE *)(this + 820) = 0;
      return this;
    }
  }
  return result;
}
