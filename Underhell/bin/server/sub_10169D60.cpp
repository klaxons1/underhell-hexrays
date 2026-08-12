int __thiscall sub_10169D60(int this, int a2, int a3, int a4, int a5)
{
  BOOL v5; // eax
  float *v6; // esi
  bool v7; // zf
  int result; // eax
  int *v9; // ecx
  int *v10; // ecx

  v5 = *(_DWORD *)(this + 3620) == 0;
  v6 = (float *)(this + 864);
  *(_DWORD *)(this + 3620) = v5;
  v7 = !v5;
  result = *(_DWORD *)(this + 864);
  if ( v7 )
  {
    if ( result != COERCE_INT(0.0) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v6 = 0.0;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          result = sub_100194B0(v10, 864);
        *v6 = 0.0;
      }
    }
  }
  else if ( result != COERCE_INT(1.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v6 = 1.0;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        result = sub_100194B0(v9, 864);
      *v6 = 1.0;
    }
  }
  return result;
}
