int __thiscall sub_103E1D40(int this, float a2)
{
  double v3; // st7
  int result; // eax
  int v5; // edi
  int *v6; // ecx
  int *v7; // ecx

  v3 = a2 + *(float *)(this + 1784);
  result = (int)v3;
  *(float *)(this + 1784) = v3 - (double)(int)v3;
  v5 = *(_DWORD *)(this + 1800) - (int)v3;
  if ( *(_DWORD *)(this + 1800) != v5 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 1800);
    }
    *(_DWORD *)(this + 1800) = v5;
  }
  if ( *(int *)(this + 1800) < 0 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 1800);
    }
    *(_DWORD *)(this + 1800) = 0;
    *(float *)(this + 1784) = 0.0;
  }
  return result;
}
