int __thiscall sub_10151AB0(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100F5810((char *)this);
  *(_DWORD *)this = &CFuncSmokeVolume::`vftable';
  result = this;
  if ( *(_DWORD *)(this + 1088) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1088) = 1.0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1088);
      result = this;
      *(float *)(this + 1088) = 1.0;
    }
  }
  return result;
}
