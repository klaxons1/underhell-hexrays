int __thiscall sub_10140E90(int this, float a2, float a3, float a4)
{
  int *v5; // ecx
  int *v6; // ecx
  int result; // eax
  int *v8; // ecx

  if ( *(_DWORD *)(this + 800) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 800);
    }
    *(float *)(this + 800) = a2;
  }
  if ( *(_DWORD *)(this + 804) != LODWORD(a3) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 804);
    }
    *(float *)(this + 804) = a3;
  }
  result = *(_DWORD *)(this + 808);
  if ( result != LODWORD(a4) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 808) = a4;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        result = sub_100194B0(v8, 808);
      *(float *)(this + 808) = a4;
    }
  }
  return result;
}
