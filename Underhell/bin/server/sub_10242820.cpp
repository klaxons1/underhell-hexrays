int __thiscall sub_10242820(int this, int a2, float a3)
{
  int *v4; // ecx
  int result; // eax
  int *v6; // ecx

  if ( *(_DWORD *)(this + 820) != a2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 820);
    }
    *(_DWORD *)(this + 820) = a2;
  }
  result = *(_DWORD *)(this + 824);
  if ( result != LODWORD(a3) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 824) = a3;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 824);
      *(float *)(this + 824) = a3;
    }
  }
  return result;
}
