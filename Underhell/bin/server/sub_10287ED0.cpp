int __thiscall sub_10287ED0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100F5810((char *)this);
  *(_DWORD *)this = &CSteamJet::`vftable';
  result = this;
  if ( *(_DWORD *)(this + 836) != COERCE_INT(8.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 836) = 8.0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 836);
      result = this;
      *(float *)(this + 836) = 8.0;
    }
  }
  return result;
}
