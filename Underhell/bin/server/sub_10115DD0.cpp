int __thiscall sub_10115DD0(int this, int a2)
{
  int *v3; // ecx
  double v4; // st7
  int result; // eax
  int *v6; // ecx

  if ( *(_BYTE *)(this + 829) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 829);
    }
    *(_BYTE *)(this + 829) = 0;
  }
  v4 = 0.0;
  if ( *(float *)(this + 804) > 0.0 )
    return sub_10115CA0(this);
  result = *(_DWORD *)(this + 840);
  if ( result != COERCE_INT(0.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 840) = 0.0;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        result = sub_100194B0(v6, 840);
        v4 = 0.0;
      }
      *(float *)(this + 840) = v4;
    }
  }
  return result;
}
