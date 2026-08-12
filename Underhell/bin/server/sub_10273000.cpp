int __thiscall sub_10273000(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CWaterLODControl::`vftable';
  if ( *(_DWORD *)(this + 800) != COERCE_INT(1000.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 800);
    }
    *(float *)(this + 800) = 1000.0;
  }
  result = this;
  if ( *(_DWORD *)(this + 804) != COERCE_INT(2000.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 804) = 2000.0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 804);
      result = this;
      *(float *)(this + 804) = 2000.0;
    }
  }
  return result;
}
