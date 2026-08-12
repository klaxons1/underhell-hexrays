int __thiscall sub_10140E00(int this, float a2, float a3)
{
  int *v4; // ecx
  int result; // eax
  int *v6; // ecx

  if ( *(_DWORD *)(this + 804) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 804);
    }
    *(float *)(this + 804) = a2;
  }
  result = *(_DWORD *)(this + 808);
  if ( result != LODWORD(a3) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 808) = a3;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 808);
      *(float *)(this + 808) = a3;
    }
  }
  return result;
}
